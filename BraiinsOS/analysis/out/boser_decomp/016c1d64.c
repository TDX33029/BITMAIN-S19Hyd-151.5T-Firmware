// FUN_016c1d64 @ 016c1d64 size=264 calls_out=3 calls_in=2
// strings: 

void FUN_016c1d64(uint *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_48;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = 0;
  iVar5 = param_3 * 0x14;
  if (0x6666666 < param_3) {
LAB_016c1d8c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,iVar5);
  }
  if (iVar5 == 0) {
    local_44 = (undefined4 *)&SUB_00000004;
    local_48 = 0;
  }
  else {
    uVar2 = 4;
    local_44 = (undefined4 *)FUN_01298504(iVar5,4);
    if (local_44 == (undefined4 *)0x0) goto LAB_016c1d8c;
    local_48 = param_3;
    if (param_3 != 0) {
      uVar3 = 0;
      puVar4 = local_44;
      do {
        if (iVar5 == 0) break;
        uVar1 = *(undefined2 *)(param_2 + 0x10);
        FUN_016c0ed4(&local_38,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
        local_2c = *(undefined4 *)(param_2 + 0xc);
        local_28 = CONCAT22(local_28._2_2_,uVar1);
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + -0x14;
        param_2 = param_2 + 0x14;
        *puVar4 = local_38;
        puVar4[1] = uStack_34;
        puVar4[2] = uStack_30;
        puVar4[3] = local_2c;
        puVar4[4] = local_28;
        puVar4 = puVar4 + 5;
      } while (param_3 != uVar3);
    }
  }
  *param_1 = local_48;
  param_1[1] = (uint)local_44;
  param_1[2] = param_3;
  return;
}

