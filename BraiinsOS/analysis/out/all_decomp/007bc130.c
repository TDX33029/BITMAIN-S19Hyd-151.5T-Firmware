// FUN_007bc130 @ 007bc130 size=192 calls_out=3 calls_in=1
// strings: 

void FUN_007bc130(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)param_2[1]) {
    *param_1 = 0x80000000;
    return;
  }
  uVar5 = 5;
  cVar1 = *pcVar2;
  *param_2 = pcVar2 + 1;
  puVar4 = &DAT_0034297e;
  if (cVar1 != '\0') {
    uVar5 = 4;
    puVar4 = &DAT_00567b14;
  }
  iVar3 = thunk_FUN_016d4a50(uVar5);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar5);
  }
  FUN_016dd1aa(iVar3,puVar4,uVar5);
  *param_1 = uVar5;
  param_1[1] = iVar3;
  param_1[2] = uVar5;
  return;
}

