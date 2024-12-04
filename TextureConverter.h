#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"

//テクスチャコンバーター
class TextureConverter 
{
  public:
	  TextureConverter();
	  ~TextureConverter();
	  ///<summary>
	  ///テクスチャをWICからDDSに変換する
	  /// </summary>
	  /// <param name="filePath">ファイルパス</param>
	  void ConvertTextureWICToDDS(const std::string& filePath);
  private:
	  ///<summary>
	  ///テクスチャファイルの読み込み
	  /// </summary>
	  /// <param name="filePath">ファイルパス</param>
	  void LoadWICTextureFromFile(const std::string& filePath);
	  ///<summary>
	  ///テクスチャファイルの読み込み
	  /// </summary>
	  /// <param name="filePath">ファイルパス</param>
	  void SeparateFilePath(const std::wstring& filePath);
	  ///<summary>
	  ///マルチバイト文字をワイド文字に変換する
	  /// </summary>
	  /// <param name="mString">マルチバイト文字列</param>
	  static std::wstring ConvertMultiByteStringToWideString(const std::string&mString);
	  ///<summary>
	  ///DDSテクスチャとしてファイルを書き出し
	  /// </summary>
	  void SaveDDSTextureToFile();
	  //画像の情報
	  DirectX::TexMetadata metadata_;
	  //画像イメージのコンテナ
	  DirectX::ScratchImage scratchImage_;

	  //ディレクトリパス
	  std::wstring directoryPath_;
	  //ファイル名
	  std::wstring fileName_;
	  //ファイル拡張子
	  std::wstring fileExt_;
};