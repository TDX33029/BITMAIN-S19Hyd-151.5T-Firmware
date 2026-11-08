// FUN_00045040 @ 00045040  size=216  callers=0
// program: bmminer


int FUN_00045040(int *param_1)

{
  int iVar1;
  size_t sVar2;
  char acStack_2008 [8196];
  
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
    sVar2 = strlen((char *)param_1[2]);
    return sVar2 + 1;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x10:
  case 0x13:
  case 0x16:
  case 0x1a:
    return 4;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
    iVar1 = 8;
    break;
  case 0xe:
    return 1;
  default:
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2008,0x2000,"Should not happen for unknown data type %d",*param_1);
      FUN_0004948c(3,acStack_2008,0);
      return 0;
    }
    iVar1 = 0;
  }
  return iVar1;
}

