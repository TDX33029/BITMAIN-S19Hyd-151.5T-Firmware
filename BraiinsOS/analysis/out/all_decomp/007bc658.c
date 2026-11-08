// FUN_007bc658 @ 007bc658 size=188 calls_out=3 calls_in=1
// strings: manual | manual | manual

void FUN_007bc658(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)param_2[1]) {
    *param_1 = 0x80000000;
    return;
  }
  uVar4 = 4;
  cVar1 = *pcVar2;
  *param_2 = pcVar2 + 1;
  pcVar2 = &DAT_00568078;
  if (cVar1 != '\0') {
    uVar4 = 6;
    pcVar2 = "manual";
  }
  iVar3 = thunk_FUN_016d4a50(uVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar4);
  }
  FUN_016dd1aa(iVar3,pcVar2,uVar4);
  *param_1 = uVar4;
  param_1[1] = iVar3;
  param_1[2] = uVar4;
  return;
}

