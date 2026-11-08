// FUN_0141b5e8 @ 0141b5e8 size=548 calls_out=2 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0141b5e8(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint extraout_r12;
  uint uVar12;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_60;
  undefined4 local_5c;
  uint uStack_58;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  iVar8 = param_3 * 0x34;
  if (0x2762762 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar8);
  }
  if (iVar8 == 0) {
    local_7c = 4;
    local_80 = 0;
  }
  else {
    local_7c = thunk_FUN_016d4a50(iVar8);
    if (local_7c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar8);
    }
    local_80 = param_3;
    if (param_3 != 0) {
      iVar9 = 0;
      puVar4 = (uint *)((uint)&local_48 | 5);
      uVar11 = 0;
      piVar10 = param_2;
      do {
        if (iVar8 == iVar9) break;
        iVar1 = piVar10[0xc];
        if ((undefined4 *)piVar10[8] == (undefined4 *)0x0) {
          uVar2 = *(undefined1 *)((int)param_2 + iVar9 + 0x24);
          local_48 = 0;
        }
        else {
          (**(code **)piVar10[8])
                    (&local_38,(int)param_2 + iVar9 + 0x2c,
                     *(undefined4 *)((int)param_2 + iVar9 + 0x24),
                     *(undefined4 *)((int)param_2 + iVar9 + 0x28));
          local_60 = CONCAT13((undefined1)uStack_30,local_34._1_3_);
          local_5c._0_3_ = (undefined3)(uStack_30 >> 8);
          local_5c._3_1_ = (undefined1)uStack_2c;
          uStack_58 = uStack_2c >> 8;
          local_48 = local_38;
          uVar2 = (undefined1)local_34;
        }
        puVar4[1] = local_5c;
        *(uint *)((int)puVar4 + 7) = CONCAT31((undefined3)uStack_58,local_5c._3_1_);
        local_44 = CONCAT31(local_44._1_3_,uVar2);
        puVar3 = (undefined4 *)piVar10[3];
        iVar6 = piVar10[4];
        iVar7 = piVar10[5];
        *puVar4 = local_60;
        (*(code *)*puVar3)(&local_38,piVar10 + 6,iVar6,iVar7);
        iVar6 = *piVar10;
        local_28 = CONCAT31(local_28._1_3_,(char)piVar10[7]);
        uVar12 = extraout_r12;
        if (iVar6 == 1) {
          local_88 = *(uint *)((int)param_2 + iVar9 + 8);
          uVar12 = *(uint *)((int)param_2 + iVar9 + 4);
        }
        uVar11 = uVar11 + 1;
        piVar10 = piVar10 + 0xd;
        local_60 = local_38;
        local_5c = local_34;
        uStack_58 = uStack_30;
        puVar5 = (uint *)(local_7c + iVar9);
        *puVar5 = (uint)(iVar6 == 1);
        iVar9 = iVar9 + 0x34;
        puVar5[1] = uVar12;
        puVar5[2] = local_88;
        puVar5[3] = local_38;
        puVar5[4] = local_34;
        puVar5[5] = uStack_30;
        puVar5[6] = uStack_2c;
        puVar5[7] = local_28;
        *(short *)(puVar5 + 0xc) = (short)iVar1;
        puVar5[8] = local_48;
        puVar5[9] = local_44;
        puVar5[10] = local_40;
        puVar5[0xb] = local_3c;
      } while (param_3 != uVar11);
    }
  }
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = param_3;
  return;
}

