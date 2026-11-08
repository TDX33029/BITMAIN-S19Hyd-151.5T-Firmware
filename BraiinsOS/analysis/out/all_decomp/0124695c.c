// FUN_0124695c @ 0124695c size=244 calls_out=4 calls_in=0
// strings: 

void FUN_0124695c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = 0;
  if (*param_4 == '\x03') {
    iVar5 = *(int *)(param_4 + 0xc);
    uVar1 = *(undefined4 *)(param_4 + 8);
    iVar4 = 1;
    if ((iVar5 != 0) && (iVar4 = thunk_FUN_016d4a50(iVar5), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
    FUN_016dd1aa(iVar4,uVar1,iVar5);
    local_30 = CONCAT31(local_30._1_3_,3);
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    *puVar2 = 1;
    puVar2[1] = 1;
    puVar2[2] = local_30;
    puVar2[3] = iVar5;
    puVar2[4] = iVar4;
    puVar2[5] = iVar5;
    puVar2[6] = uStack_20;
    puVar2[7] = uStack_1c;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *puVar3 = puVar2;
    param_1[1] = puVar3;
    param_1[2] = &DAT_0188aca8;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

