// FUN_01a7481c @ 01a7481c size=2324 calls_out=17 calls_in=2
// strings: Timeout expired

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a7481c(undefined4 *param_1,int *******param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *****pppppiVar7;
  int iVar8;
  code *pcVar9;
  int ******ppppppiVar10;
  int ****ppppiVar11;
  undefined8 uVar12;
  int *******local_128;
  undefined1 *local_124;
  int ******local_120;
  int ******local_11c;
  int ******local_118;
  int ******local_114;
  undefined8 local_110;
  int *******local_108;
  undefined1 *puStack_104;
  int iStack_100;
  int *******local_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  undefined2 local_f0;
  int *******local_e8;
  undefined1 *puStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 local_d8;
  int ******local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 local_c4;
  int ******local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *******local_b0;
  undefined1 *puStack_ac;
  int iStack_a8;
  int *******local_a0;
  undefined1 *local_9c;
  int local_98;
  int *******local_90;
  undefined1 *local_8c;
  int local_88;
  int local_84;
  undefined8 local_40;
  
  uVar12 = CONCAT44(param_3,param_2);
  pcVar9 = *(code **)(param_3 + 0x1c);
  (*pcVar9)(&local_90);
  if ((local_90 == (int *******)0x88ee3dc1 && local_88 == -0x16983aa4) &&
      (local_8c == (undefined1 *)0x62470a94 && local_84 == 0x32f6afe0)) {
    FUN_01bed4e2(param_1,param_2,0x68);
  }
  else {
    (*pcVar9)(&local_90,param_2);
    if ((local_90 != (int *******)0xa20f1e1c || local_88 != -0x4e480163) ||
        (local_8c != (undefined1 *)0x9ce751f3 || local_84 != 0x716290ad)) {
      do {
        iVar8 = (int)((ulonglong)uVar12 >> 0x20);
        ppppppiVar10 = (int ******)uVar12;
        pcVar9 = *(code **)(iVar8 + 0x1c);
        (*pcVar9)(&local_90,ppppppiVar10);
        if ((local_90 == (int *******)0x88ee3dc1 && local_88 == -0x16983aa4) &&
            (local_8c == (undefined1 *)0x62470a94 && local_84 == 0x32f6afe0)) {
          uVar1 = *(undefined1 *)(ppppppiVar10 + 0x19);
          FUN_006666fc(&local_c0,ppppppiVar10[0x17],ppppppiVar10[0x18]);
          (*(code *)*ppppppiVar10[0x10])
                    (&local_90,ppppppiVar10 + 0x13,ppppppiVar10[0x11],ppppppiVar10[0x12]);
          uVar2 = *(undefined2 *)(ppppppiVar10 + 0xe);
          uVar12 = FUN_01ac635c(ppppppiVar10[6],ppppppiVar10[7]);
          FUN_0187b658(&local_b0,ppppppiVar10[9],ppppppiVar10[10]);
          FUN_017260a4(&local_a0,ppppppiVar10[0xc],ppppppiVar10[0xd]);
          if (*ppppppiVar10 == (int *****)0x0) {
            local_128 = (int *******)0x0;
          }
          else if (*ppppppiVar10 == (int *****)0x1) {
            local_128 = (int *******)0x1;
          }
          else {
            local_128 = (int *******)0x2;
          }
          local_108 = local_b0;
          puStack_104 = puStack_ac;
          iStack_100 = iStack_a8;
          local_fc = local_a0;
          puStack_f8 = local_9c;
          iStack_f4 = local_98;
          local_d0 = local_c0;
          uStack_cc = uStack_bc;
          uStack_c8 = uStack_b8;
          local_e8 = local_90;
          puStack_e4 = local_8c;
          iStack_e0 = local_88;
          iStack_dc = local_84;
          local_124 = (undefined1 *)0x0;
          local_d8 = 0;
          local_f0 = uVar2;
          local_c4 = uVar1;
LAB_01a74ff0:
          if (local_128 != (int *******)0x3 || local_124 != (undefined1 *)0x0) {
LAB_01a7502c:
            local_110 = uVar12;
            FUN_01bed4e2(&local_90,&local_128,0x68);
            uVar12 = FUN_01a756d0(param_2,param_3);
            if ((int *)local_40 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar8 = *(int *)local_40;
                bVar3 = (bool)hasExclusiveAccess((int *)local_40);
              } while (!bVar3);
              *(int *)local_40 = iVar8 + -1;
              if (iVar8 == 1) {
                DataMemoryBarrier(0xb);
                FUN_018531c0((int *)local_40,local_40._4_4_);
              }
            }
            local_40 = uVar12;
            FUN_01bed4e2(param_1,&local_90,0x68);
            return;
          }
          break;
        }
        (*pcVar9)(&local_90,ppppppiVar10);
        if ((local_90 == (int *******)0x6b65bce7 && local_88 == -0x2406a255) &&
            (local_8c == (undefined1 *)0x63589498 && local_84 == -0x5baaa162)) {
          local_88 = 0;
          local_8c = (undefined1 *)0x1;
          local_90 = (int *******)0x0;
          FUN_0132b898(&local_90,0,0xf,1,1);
          iVar8 = local_88;
          FUN_01bed4e2(local_8c + local_88,"Timeout expired",0xf);
          local_98 = iVar8 + 0xf;
          local_a0 = local_90;
          local_9c = local_8c;
          local_88 = local_98;
          FUN_01a70fd4(&local_128,1);
          uVar12 = CONCAT44(local_110._4_4_,(int ******)local_110);
          goto LAB_01a74ff0;
        }
        (*pcVar9)(&local_90,ppppppiVar10);
        if ((local_90 == (int *******)0x83207c85 && local_88 == -0x6ba8b89d) &&
            (local_8c == (undefined1 *)0xf2bc690a && local_84 == 0x4c2d8331)) {
          local_98 = 0;
          local_9c = (undefined1 *)0x1;
          local_a0 = (int *******)0x0;
          local_84 = 0;
          local_88 = 0x60000020;
          local_90 = (int *******)&local_a0;
          local_8c = &DAT_01d2d1f4;
          iVar8 = (*(code *)ppppppiVar10[1][4])(*ppppppiVar10,&local_90);
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_b0,&DAT_01d2d21c,&DAT_01d30334);
          }
          local_b0 = local_a0;
          puStack_ac = local_9c;
          iStack_a8 = local_98;
          FUN_01a70fd4(&local_128,0xe);
          uVar12 = CONCAT44(local_110._4_4_,(int ******)local_110);
          goto LAB_01a74ff0;
        }
        (*pcVar9)(&local_90,ppppppiVar10);
        if ((local_90 == (int *******)0x8d6e89d9 && local_88 == -0x3305018c) &&
            (local_8c == (undefined1 *)0xcaf128a4 && local_84 == 0xe20649f)) {
          local_c0 = ppppppiVar10;
          iVar6 = FUN_01427ac8(*ppppppiVar10);
          if (iVar6 == 0) {
            pppppiVar7 = *ppppppiVar10;
            if (*(char *)(pppppiVar7 + 2) == '\x04') {
              local_98 = 0;
              local_a0 = (int *******)0x0;
              local_84 = 0;
              local_9c = (undefined1 *)0x1;
              local_88 = 0x60000020;
              local_8c = &DAT_01d2d1f4;
              local_90 = (int *******)&local_a0;
              iVar6 = FUN_01427888(ppppppiVar10,&local_90);
              if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533383,0x37,&local_b0,&DAT_01d2d21c,&DAT_01d30334);
              }
              local_b0 = local_a0;
              puStack_ac = local_9c;
              iStack_a8 = local_98;
              FUN_01a70fd4(&local_128,1);
            }
            else {
              ppppiVar11 = *pppppiVar7;
              if ((ppppiVar11 == (int ****)0x0) ||
                 ((*(code *)pppppiVar7[1][7])(&local_90,ppppiVar11),
                 (local_90 != (int *******)0xa20f1e1c || local_88 != -0x4e480163) ||
                 (local_8c != (undefined1 *)0x9ce751f3 || local_84 != 0x716290ad)))
              goto LAB_01a74d7c;
              uVar4 = FUN_01a752fc(ppppiVar11);
              local_9c = &LAB_01a889c8;
              local_a0 = &local_c0;
              FUN_00664898(&local_90,&DAT_0057881f,&local_a0);
              FUN_01a70fd4(&local_128,uVar4,&local_90);
            }
          }
          else {
            local_98 = 0;
            local_a0 = (int *******)0x0;
            local_84 = 0;
            local_9c = (undefined1 *)0x1;
            local_88 = 0x60000020;
            local_8c = &DAT_01d2d1f4;
            local_90 = (int *******)&local_a0;
            iVar6 = FUN_01427888(ppppppiVar10,&local_90);
            if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_b0,&DAT_01d2d21c,&DAT_01d30334);
            }
            local_b0 = local_a0;
            puStack_ac = local_9c;
            iStack_a8 = local_98;
            FUN_01a70fd4(&local_128,0xe);
          }
          uVar12 = CONCAT44(local_110._4_4_,(int ******)local_110);
          if (local_128 != (int *******)0x3 || local_124 != (undefined1 *)0x0) goto LAB_01a7502c;
        }
        else {
LAB_01a74d7c:
          local_124 = (undefined1 *)0x0;
          local_128 = (int *******)0x3;
        }
        uVar12 = (**(code **)(iVar8 + 0x18))(ppppppiVar10);
      } while ((int)uVar12 != 0);
      param_1[1] = 0;
      param_1[2] = param_2;
      *param_1 = 3;
      param_1[3] = param_3;
      return;
    }
    local_a0 = param_2;
    uVar4 = FUN_01a752fc(param_2);
    local_124 = &LAB_01a655c0;
    local_128 = (int *******)&local_a0;
    FUN_00664898(&local_90,&DAT_0057881f,&local_128);
    local_128 = local_90;
    local_124 = local_8c;
    local_120 = (int ******)local_88;
    FUN_01a70fd4(&local_90,uVar4,&local_128);
    local_120 = *local_a0;
    local_11c = local_a0[1];
    local_118 = local_a0[2];
    local_114 = local_a0[3];
    local_110._0_4_ = local_a0[4];
    local_110._4_4_ = local_a0[5];
    local_124 = (undefined1 *)0x1;
    local_128 = (int *******)0x1;
    piVar5 = (int *)thunk_FUN_01be5118(0x20);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *piVar5 = (int)local_128;
    piVar5[1] = (int)local_124;
    piVar5[2] = (int)local_120;
    piVar5[3] = (int)local_11c;
    piVar5[4] = (int)local_118;
    piVar5[5] = (int)local_114;
    piVar5[6] = (int)(int ******)local_110;
    piVar5[7] = (int)local_110._4_4_;
    if ((int *)local_40 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *(int *)local_40;
        bVar3 = (bool)hasExclusiveAccess((int *)local_40);
      } while (!bVar3);
      *(int *)local_40 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0((int *)local_40,local_40._4_4_);
      }
    }
    local_40._4_4_ = &DAT_01d2d498;
    local_40._0_4_ = piVar5;
    FUN_01bed4e2(param_1,&local_90,0x68);
    param_2 = local_a0;
  }
  thunk_FUN_01be4678(param_2);
  return;
}

