// FUN_006a4b84 @ 006a4b84 size=172 calls_out=1 calls_in=2
// strings: Float | String | Boolean

bool FUN_006a4b84(ushort *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((1 < param_2) && (*param_1 == 0x5f5f)) {
    return true;
  }
  bVar4 = false;
  switch(param_2) {
  case 2:
    iVar1 = *param_1 - 0x4449;
    goto LAB_006a4c1c;
  case 3:
    uVar3 = 3;
    pcVar2 = "Int";
    break;
  default:
    goto switchD_006a4bb8_caseD_4;
  case 5:
    uVar3 = 5;
    pcVar2 = "Float";
    break;
  case 6:
    iVar1 = thunk_FUN_01bed842(param_1,"String",6);
LAB_006a4c1c:
    return iVar1 == 0;
  case 7:
    uVar3 = 7;
    pcVar2 = "Boolean";
  }
  iVar1 = thunk_FUN_01bed842(param_1,pcVar2,uVar3);
  if (iVar1 == 0) {
    bVar4 = true;
  }
switchD_006a4bb8_caseD_4:
  return bVar4;
}

