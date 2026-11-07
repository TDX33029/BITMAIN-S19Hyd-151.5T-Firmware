// FUN_017937a4 @ 017937a4 size=496 calls_out=0 calls_in=3
// strings: Unspecified error code | External sequences are not valid | Block-level external sequence producer returned an error code | Source buffer is wrong | Destination buffer is wrong | An I/O error occurred when reading/seeking

char * FUN_017937a4(uint param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 < 0xffffff89) {
    iVar2 = 0;
  }
  else {
    iVar2 = -param_1;
  }
  switch(iVar2) {
  case 0:
    pcVar1 = "No error detected";
    break;
  case 1:
    pcVar1 = "Error (generic)";
    break;
  default:
    pcVar1 = "Unspecified error code";
    break;
  case 10:
    pcVar1 = "Unknown frame descriptor";
    break;
  case 0xc:
    pcVar1 = "Version not supported";
    break;
  case 0xe:
    pcVar1 = "Unsupported frame parameter";
    break;
  case 0x10:
    pcVar1 = "Frame requires too much memory for decoding";
    break;
  case 0x14:
    pcVar1 = "Data corruption detected";
    break;
  case 0x16:
    pcVar1 = "Restored data doesn\'t match checksum";
    break;
  case 0x18:
    pcVar1 = "Header of Literals\' block doesn\'t respect format specification";
    break;
  case 0x1e:
    pcVar1 = "Dictionary is corrupted";
    break;
  case 0x20:
    pcVar1 = "Dictionary mismatch";
    break;
  case 0x22:
    pcVar1 = "Cannot create Dictionary from provided samples";
    break;
  case 0x28:
    pcVar1 = "Unsupported parameter";
    break;
  case 0x29:
    pcVar1 = "Unsupported combination of parameters";
    break;
  case 0x2a:
    pcVar1 = "Parameter is out of bound";
    break;
  case 0x2c:
    pcVar1 = "tableLog requires too much memory : unsupported";
    break;
  case 0x2e:
    pcVar1 = "Unsupported max Symbol Value : too large";
    break;
  case 0x30:
    pcVar1 = "Specified maxSymbolValue is too small";
    break;
  case 0x32:
    pcVar1 = "pledged buffer stability condition is not respected";
    break;
  case 0x3c:
    pcVar1 = "Operation not authorized at current processing stage";
    break;
  case 0x3e:
    pcVar1 = "Context should be init first";
    break;
  case 0x40:
    pcVar1 = "Allocation error : not enough memory";
    break;
  case 0x42:
    pcVar1 = "workSpace buffer is not large enough";
    break;
  case 0x46:
    pcVar1 = "Destination buffer is too small";
    break;
  case 0x48:
    pcVar1 = "Src size is incorrect";
    break;
  case 0x4a:
    pcVar1 = "Operation on NULL destination buffer";
    break;
  case 0x50:
    pcVar1 = "Operation made no progress over multiple calls, due to output buffer being full";
    break;
  case 0x52:
    pcVar1 = "Operation made no progress over multiple calls, due to input being empty";
    break;
  case 100:
    pcVar1 = "Frame index is too large";
    break;
  case 0x66:
    pcVar1 = "An I/O error occurred when reading/seeking";
    break;
  case 0x68:
    pcVar1 = "Destination buffer is wrong";
    break;
  case 0x69:
    pcVar1 = "Source buffer is wrong";
    break;
  case 0x6a:
    pcVar1 = "Block-level external sequence producer returned an error code";
    break;
  case 0x6b:
    pcVar1 = "External sequences are not valid";
  }
  return pcVar1;
}

