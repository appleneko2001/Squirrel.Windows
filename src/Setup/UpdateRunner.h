#pragma once
class CUpdateRunner
{

public:
	static bool ConfirmInstallToThisPath(wchar_t* path);
	static void DisplayErrorMessage(CString& errorMessage, wchar_t* logFile);
	static HRESULT AreWeUACElevated();
	static HRESULT ShellExecuteFromExplorer(LPWSTR pszFile, LPWSTR pszParameters);
	static bool DirectoryExists(wchar_t* szPath);
	static bool DirectoryIsWritable(wchar_t* szPath);
	static int ExtractUpdaterAndRun(wchar_t* lpCommandLine, bool useFallbackDir);
};
