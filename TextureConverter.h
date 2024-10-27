#pragma once
#include <string>

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
	  ///マルチバイト文字をワイド文字に変換する
	  /// </summary>
	  /// <param name="mString">マルチバイト文字列</param>
	  static std::wstring ConvertMultiByteStringToWideString(const std::string&mString);
};