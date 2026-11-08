// FUN_01651cc8 @ 01651cc8 size=2624 calls_out=9 calls_in=3
// strings: 

void FUN_01651cc8(int param_1,uint *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *local_40;
  undefined1 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  
  if (param_1 == 0) {
    puVar8 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = uVar3 - 1;
    DataMemoryBarrier(0xb);
    if (uVar3 != 1) {
      return;
    }
    puVar8 = param_2 + 8;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = uVar3 | param_2[0x12];
    DataMemoryBarrier(0xb);
    if ((param_2[0x12] & uVar3) == 0) {
      FUN_01656cb0(&local_38,param_2 + 0x1c);
      puVar2 = local_34;
      if (local_38 == (undefined4 *)&DAT_00000001) {
        local_3c = local_30._0_1_;
        local_40 = local_34;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d06988,&DAT_01d06948);
      }
      uVar3 = (uint)local_30 & 0xff;
      iVar4 = local_34[4];
      if (iVar4 != 0) {
        piVar11 = (int *)local_34[3];
        piVar10 = piVar11;
        do {
          piVar12 = piVar10 + 3;
          piVar9 = (int *)(*piVar10 + 0xc);
          if (*piVar9 == 0) {
            DataMemoryBarrier(0xb);
LAB_01651eb0:
            bVar1 = (bool)hasExclusiveAccess(piVar9);
            if (!bVar1) goto code_r0x01651ebc;
            *piVar9 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(*(int *)(*piVar10 + 8) + 0x18);
            do {
              iVar5 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar5 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01651ed0;
          }
LAB_01651ec8:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01651ed0:
          piVar10 = piVar12;
        } while (piVar12 != piVar11 + iVar4 * 3);
      }
      local_38 = (undefined4 *)local_34[6];
      local_2c = local_34[7];
      local_34[7] = 0;
      local_28 = 0;
      local_30 = local_34 + 5;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar9 = (int *)*local_38;
          piVar10 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar11 = piVar9 + 3;
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_01652530:
            bVar1 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar1) goto code_r0x0165253c;
            *piVar11 = *piVar10;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(piVar9[2] + 0x18);
            do {
              iVar4 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar4 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01652550;
          }
LAB_01652548:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01652550:
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db128(piVar9);
          }
        } while (local_38 != local_34);
      }
      FUN_01652c58(&local_38);
      uVar6 = 0;
      if (puVar2[4] == 0) {
        uVar6 = puVar2[7];
      }
      DataMemoryBarrier(0xb);
      if (puVar2[4] == 0) {
        uVar6 = (uint)(uVar6 == 0);
      }
      *(char *)(param_2 + 0x24) = (char)uVar6;
      DataMemoryBarrier(0xb);
      FUN_00a97e8c(puVar2,uVar3);
    }
    puVar8 = param_2 + 0x2a;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *(char *)puVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)uVar3 == '\0') {
      return;
    }
    if (param_2[0x26] != 0) {
      thunk_FUN_01be4678(param_2[0x25]);
    }
    FUN_01651b60(param_2 + 0x15);
    FUN_01651b60(param_2 + 0x1e);
  }
  else if (param_1 == 1) {
    puVar8 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = uVar3 - 1;
    DataMemoryBarrier(0xb);
    if (uVar3 != 1) {
      return;
    }
    puVar8 = param_2 + 8;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = uVar3 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar3 & 1) == 0) {
      FUN_01656cb0(&local_38,param_2 + 0x10);
      puVar2 = local_34;
      if (local_38 == (undefined4 *)&DAT_00000001) {
        local_3c = local_30._0_1_;
        local_40 = local_34;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d06918,&DAT_01d06948);
      }
      uVar3 = (uint)local_30 & 0xff;
      iVar4 = local_34[4];
      if (iVar4 != 0) {
        piVar11 = (int *)local_34[3];
        piVar10 = piVar11;
        do {
          piVar12 = piVar10 + 3;
          piVar9 = (int *)(*piVar10 + 0xc);
          if (*piVar9 == 0) {
            DataMemoryBarrier(0xb);
LAB_01651d90:
            bVar1 = (bool)hasExclusiveAccess(piVar9);
            if (!bVar1) goto code_r0x01651d9c;
            *piVar9 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(*(int *)(*piVar10 + 8) + 0x18);
            do {
              iVar5 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar5 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01651db0;
          }
LAB_01651da8:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01651db0:
          piVar10 = piVar12;
        } while (piVar12 != piVar11 + iVar4 * 3);
      }
      local_38 = (undefined4 *)local_34[6];
      local_2c = local_34[7];
      local_34[7] = 0;
      local_28 = 0;
      local_30 = local_34 + 5;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar9 = (int *)*local_38;
          piVar10 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar11 = piVar9 + 3;
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_01652074:
            bVar1 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar1) goto code_r0x01652080;
            *piVar11 = *piVar10;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(piVar9[2] + 0x18);
            do {
              iVar4 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar4 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01652094;
          }
LAB_0165208c:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01652094:
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db128(piVar9);
          }
        } while (local_38 != local_34);
      }
      FUN_01652c58(&local_38);
      uVar6 = 0;
      if (puVar2[4] == 0) {
        uVar6 = puVar2[7];
      }
      DataMemoryBarrier(0xb);
      if (puVar2[4] == 0) {
        uVar6 = (uint)(uVar6 == 0);
      }
      *(char *)(param_2 + 0x18) = (char)uVar6;
      DataMemoryBarrier(0xb);
      FUN_00a97e8c(puVar2,uVar3);
    }
    puVar8 = param_2 + 0x22;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *(char *)puVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)uVar3 == '\0') {
      return;
    }
    uVar6 = param_2[8];
    piVar10 = (int *)param_2[1];
    for (uVar3 = *param_2 & 0xfffffffe; uVar3 != (uVar6 & 0xfffffffe); uVar3 = uVar3 + 2) {
      uVar7 = (uVar3 & 0x3f) >> 1;
      if (uVar7 == 0x1f) {
        piVar11 = (int *)*piVar10;
        thunk_FUN_01be4678(piVar10);
        piVar10 = piVar11;
      }
      else {
        FUN_0165037c(piVar10 + uVar7 * 5 + 1);
      }
    }
    if (piVar10 != (int *)0x0) {
      thunk_FUN_01be4678(piVar10);
    }
    FUN_01651b60(param_2 + 0x12);
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = uVar3 - 1;
    DataMemoryBarrier(0xb);
    if (uVar3 != 1) {
      return;
    }
    FUN_01656cb0(&local_38,param_2 + 2);
    puVar2 = local_34;
    if (local_38 == (undefined4 *)&DAT_00000001) {
      local_3c = local_30._0_1_;
      local_40 = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d06aa8,&DAT_01d069d8);
    }
    uVar3 = (uint)local_30 & 0xff;
    if (*(char *)(local_34 + 0xe) == '\0') {
      iVar4 = local_34[4];
      piVar10 = (int *)local_34[3];
      *(undefined1 *)(local_34 + 0xe) = 1;
      if (iVar4 != 0) {
        piVar11 = piVar10;
        do {
          piVar12 = piVar11 + 3;
          piVar9 = (int *)(*piVar11 + 0xc);
          if (*piVar9 == 0) {
            DataMemoryBarrier(0xb);
LAB_01651fac:
            bVar1 = (bool)hasExclusiveAccess(piVar9);
            if (!bVar1) goto code_r0x01651fb8;
            *piVar9 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar11 = (int *)(*(int *)(*piVar11 + 8) + 0x18);
            do {
              iVar5 = *piVar11;
              bVar1 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar1);
            *piVar11 = 1;
            if (iVar5 == -1) {
              FUN_01be6c3c(0xf0,piVar11,0x81,1);
            }
            goto LAB_01651fcc;
          }
LAB_01651fc4:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01651fcc:
          piVar11 = piVar12;
        } while (piVar12 != piVar10 + iVar4 * 3);
      }
      local_38 = (undefined4 *)local_34[6];
      local_2c = local_34[7];
      local_34[7] = 0;
      local_28 = 0;
      local_30 = local_34 + 5;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar9 = (int *)*local_38;
          piVar10 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar11 = piVar9 + 3;
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_01652240:
            bVar1 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar1) goto code_r0x0165224c;
            *piVar11 = *piVar10;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(piVar9[2] + 0x18);
            do {
              iVar4 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar4 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01652260;
          }
LAB_01652258:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01652260:
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db128(piVar9);
          }
        } while (local_38 != local_34);
      }
      FUN_01652c58(&local_38);
      iVar4 = puVar2[10];
      if (iVar4 != 0) {
        piVar11 = (int *)puVar2[9];
        piVar10 = piVar11;
        do {
          piVar12 = piVar10 + 3;
          piVar9 = (int *)(*piVar10 + 0xc);
          if (*piVar9 == 0) {
            DataMemoryBarrier(0xb);
LAB_01652320:
            bVar1 = (bool)hasExclusiveAccess(piVar9);
            if (!bVar1) goto code_r0x0165232c;
            *piVar9 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(*(int *)(*piVar10 + 8) + 0x18);
            do {
              iVar5 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar5 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01652340;
          }
LAB_01652338:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01652340:
          piVar10 = piVar12;
        } while (piVar12 != piVar11 + iVar4 * 3);
      }
      local_38 = (undefined4 *)puVar2[0xc];
      local_2c = puVar2[0xd];
      puVar2[0xd] = 0;
      local_28 = 0;
      local_30 = puVar2 + 0xb;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar9 = (int *)*local_38;
          piVar10 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar11 = piVar9 + 3;
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_016523e8:
            bVar1 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar1) goto code_r0x016523f4;
            *piVar11 = *piVar10;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar10 = (int *)(piVar9[2] + 0x18);
            do {
              iVar4 = *piVar10;
              bVar1 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar1);
            *piVar10 = 1;
            if (iVar4 == -1) {
              FUN_01be6c3c(0xf0,piVar10,0x81,1);
            }
            goto LAB_01652408;
          }
LAB_01652400:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01652408:
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db128(piVar9);
          }
        } while (local_38 != local_34);
      }
      FUN_01652c58(&local_38);
    }
    FUN_00a97e8c(puVar2,uVar3);
    puVar8 = param_2 + 0x11;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *(char *)puVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)uVar3 == '\0') {
      return;
    }
    FUN_01651b60(param_2 + 4);
    FUN_01651b60(param_2 + 10);
  }
  thunk_FUN_01be4678(param_2);
  return;
code_r0x01651ebc:
  if (*piVar9 != 0) goto LAB_01651ec8;
  goto LAB_01651eb0;
code_r0x0165253c:
  if (*piVar11 != 0) goto LAB_01652548;
  goto LAB_01652530;
code_r0x01651fb8:
  if (*piVar9 != 0) goto LAB_01651fc4;
  goto LAB_01651fac;
code_r0x0165224c:
  if (*piVar11 != 0) goto LAB_01652258;
  goto LAB_01652240;
code_r0x0165232c:
  if (*piVar9 != 0) goto LAB_01652338;
  goto LAB_01652320;
code_r0x016523f4:
  if (*piVar11 != 0) goto LAB_01652400;
  goto LAB_016523e8;
code_r0x01651d9c:
  if (*piVar9 != 0) goto LAB_01651da8;
  goto LAB_01651d90;
code_r0x01652080:
  if (*piVar11 != 0) goto LAB_0165208c;
  goto LAB_01652074;
}

