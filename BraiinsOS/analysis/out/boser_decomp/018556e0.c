// FUN_018556e0 @ 018556e0 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_018556e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 5) {
    iVar2 = param_1[1];
    if (iVar2 == -0x80000000) {
switchD_01855718_default:
      return;
    }
    iVar1 = param_1[2];
  }
  else {
    switch(*param_1) {
    case 0:
    case 1:
    case 2:
      iVar2 = param_1[1];
      iVar1 = param_1[2];
      break;
    case 3:
      if ((char)param_1[1] == '\x03') {
        puVar3 = (undefined4 *)param_1[2];
        FUN_01443048(*puVar3,puVar3[1]);
        thunk_FUN_01be4678(puVar3);
        return;
      }
      return;
    default:
      goto switchD_01855718_default;
    }
  }
  FUN_019bb7e0(iVar2,iVar1);
  return;
}

