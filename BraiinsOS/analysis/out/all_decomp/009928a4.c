// FUN_009928a4 @ 009928a4 size=3584 calls_out=15 calls_in=1
// strings: 

void FUN_009928a4(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_5f4;
  int local_5e0;
  int *local_5dc;
  undefined4 local_4c8 [70];
  int *local_3b0 [70];
  int *local_298;
  undefined1 local_294;
  int *local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined1 auStack_163 [283];
  undefined4 local_48;
  undefined8 local_44;
  undefined2 uStack_3c;
  int local_38;
  int *local_34;
  char local_30;
  int *local_2c;
  char local_28;
  
  piVar8 = param_2 + 2;
  if (*piVar8 == 3) {
    iVar11 = param_2[3];
    if ((*(uint *)(iVar11 + 8) & 1) == 0) goto LAB_00992e5c;
    piVar12 = (int *)(iVar11 + 0x10);
    do {
      if (*piVar12 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar12);
        goto LAB_00992900;
      }
      bVar20 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar20);
    *piVar12 = 1;
    DataMemoryBarrier(0xb);
LAB_00992900:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar11 + 0x14) != '\0') {
        uVar16 = 0;
LAB_0099343c:
        local_174 = CONCAT31(local_174._1_3_,(char)uVar16);
        local_178 = piVar12;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_178,&DAT_01868c88,&DAT_01886a94);
      }
      bVar20 = *(int *)(iVar11 + 0x18) == 3;
LAB_00992938:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(iVar11 + 0x14) = 1;
      }
    }
    else {
      uVar16 = FUN_015bf3f8();
      uVar16 = uVar16 ^ 1;
      if (*(char *)(iVar11 + 0x14) != '\0') goto LAB_0099343c;
      bVar20 = *(int *)(iVar11 + 0x18) == 3;
      if (uVar16 == 0) goto LAB_00992938;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar12,0x81,1);
    }
    if (bVar20) goto LAB_00992e5c;
    piVar12 = param_2 + 1;
    if (*param_2 != 0) {
      piVar12 = (int *)param_2[1];
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*piVar12 + 0x4c) == '\0') {
      iVar11 = param_2[3];
      pcVar14 = (char *)(iVar11 + 0x130);
      do {
        if (*pcVar14 == '\0') {
          bVar20 = (bool)hasExclusiveAccess(pcVar14);
          if (bVar20) {
            *pcVar14 = '\x01';
            DataMemoryBarrier(0xb);
            cVar2 = *(char *)(iVar11 + 0x13c);
            DataMemoryBarrier(0xb);
            puVar6 = *(undefined4 **)(iVar11 + 0x138);
            puVar17 = (undefined4 *)*param_3;
            puVar18 = (undefined4 *)param_3[1];
            bVar20 = puVar6 == puVar18;
            if (bVar20) {
              puVar6 = *(undefined4 **)(iVar11 + 0x134);
            }
            if (!bVar20 || puVar6 != puVar17) {
              uVar21 = (*(code *)*puVar17)(puVar18);
              (**(code **)(*(int *)(iVar11 + 0x134) + 0xc))(*(undefined4 *)(iVar11 + 0x138));
              *(undefined8 *)(iVar11 + 0x134) = uVar21;
              if (cVar2 != '\0') {
                (*(code *)puVar17[2])(puVar18);
              }
            }
            DataMemoryBarrier(0xb);
            *pcVar14 = '\0';
            *param_1 = 4;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        while (*pcVar14 != '\0') {
          HintYield();
        }
      } while( true );
    }
    iVar11 = param_2[3];
    if ((*(uint *)(iVar11 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01886aa4);
    }
    piVar12 = (int *)(iVar11 + 0x10);
    do {
      if (*piVar12 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar12);
        goto joined_r0x00993328;
      }
      bVar20 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar20);
    *piVar12 = 1;
    DataMemoryBarrier(0xb);
joined_r0x00993328:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar11 + 0x14) != '\0') {
        uVar16 = 0;
LAB_009934e8:
        local_294 = (undefined1)uVar16;
        local_298 = piVar12;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_298,&DAT_01868c88,&DAT_01886a94);
      }
      FUN_016dd1aa(&local_178,iVar11 + 0x18,0x118);
      *(undefined4 *)(iVar11 + 0x18) = 3;
LAB_00992a08:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(iVar11 + 0x14) = 1;
      }
    }
    else {
      uVar16 = FUN_015bf3f8();
      uVar16 = uVar16 ^ 1;
      if (*(char *)(iVar11 + 0x14) != '\0') goto LAB_009934e8;
      FUN_016dd1aa(&local_178,iVar11 + 0x18,0x118);
      *(undefined4 *)(iVar11 + 0x18) = 3;
      if (uVar16 == 0) goto LAB_00992a08;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar20 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar20);
    *piVar12 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar12,0x81,1);
      iVar11 = *piVar8;
    }
    else {
      iVar11 = *piVar8;
    }
    if (iVar11 != 4) {
      if (iVar11 == 3) {
        piVar12 = (int *)param_2[3];
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar12;
          bVar20 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar20);
        *piVar12 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa8be8(param_2[3]);
        }
      }
      else {
        FUN_0098f464(piVar8);
      }
    }
    *piVar8 = 4;
    if (local_178 != (int *)0x3) {
      FUN_016dd1aa(param_1,&local_178,0x118);
      return;
    }
LAB_00992e5c:
    *param_1 = 3;
    return;
  }
  FUN_016dd1aa(&local_5e0,piVar8,0x118);
  *piVar8 = 4;
  if (local_5e0 - 3U < 2) {
    *param_1 = 3;
    goto joined_r0x00993390;
  }
  FUN_016dd1aa(local_4c8,&local_5e0,0x118);
  piVar12 = param_2 + 1;
  if (*param_2 != 0) {
    piVar12 = (int *)param_2[1];
  }
  iVar11 = *piVar12;
  piVar12 = (int *)(iVar11 + 8);
  do {
    if (*piVar12 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar12);
      goto LAB_00992b0c;
    }
    bVar20 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar20);
  *piVar12 = 1;
  DataMemoryBarrier(0xb);
LAB_00992b0c:
  local_5f4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar11 + 0xc);
    uVar15 = local_4c8[0];
  }
  else {
    local_5f4 = FUN_015bf3f8();
    local_5f4 = local_5f4 ^ 1;
    cVar2 = *(char *)(iVar11 + 0xc);
    uVar15 = local_4c8[0];
  }
  if (cVar2 != '\0') {
    local_174._1_3_ = (undefined3)((uint)local_174 >> 8);
    local_174 = CONCAT31(local_174._1_3_,(char)local_5f4);
    local_178 = piVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_178,&DAT_01868c98,&DAT_01886a4c);
  }
  cVar2 = *(char *)(iVar11 + 0x4c);
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar9 = *(int *)(iVar11 + 0x2c);
    if (iVar9 == 0) {
      piVar13 = (int *)(iVar11 + 0x34);
      if (*piVar13 == -0x80000000) {
        uVar16 = *(uint *)(iVar11 + 0x1c);
      }
      else {
        uVar16 = *(uint *)(iVar11 + 0x1c);
        if (*(uint *)(iVar11 + 0x30) <= uVar16) {
          uVar21 = (**(code **)*param_3)(param_3[1]);
          FUN_016dd1aa((uint)&local_298 | 3,local_4c8,0x118);
          local_16c = 0;
          uStack_3c = 0;
          local_170 = 1;
          local_48 = 0;
          local_164 = 0;
          local_168 = 0;
          local_174 = 1;
          local_178 = (int *)0x1;
          local_44 = uVar21;
          FUN_016dd1aa(auStack_163,&local_298,0x11b);
          piVar7 = (int *)thunk_FUN_016d4a50(0x140);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x140);
          }
          FUN_016dd1aa(piVar7,&local_178,0x140);
          if (*piVar13 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01886a74);
          }
          do {
            iVar9 = *piVar7;
            bVar20 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar20);
          *piVar7 = iVar9 + 1;
          if (iVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x993630);
            (*pcVar1)();
          }
          FUN_0098f348(piVar13,piVar7);
          if ((local_5f4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
            iVar9 = FUN_015bf3f8();
            if (iVar9 == 0) {
              *(undefined1 *)(iVar11 + 0xc) = 1;
            }
          }
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar12;
            bVar20 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar20);
          *piVar12 = 0;
          if (iVar11 == 2) {
            FUN_016d6968(0xf0,piVar12,0x81,1);
            iVar11 = *piVar8;
          }
          else {
            iVar11 = *piVar8;
          }
          if (iVar11 != 4) {
            if (iVar11 == 3) {
              piVar8 = (int *)param_2[3];
              DataMemoryBarrier(0xb);
              do {
                iVar11 = *piVar8;
                bVar20 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar20);
              *piVar8 = iVar11 + -1;
              if (iVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aa8be8(param_2[3]);
              }
            }
            else {
              FUN_0098f464(piVar8);
            }
          }
          param_2[2] = 3;
          param_2[3] = (int)piVar7;
          *param_1 = 4;
          goto joined_r0x00993390;
        }
      }
      uVar4 = *(uint *)(iVar11 + 0x10);
      if (uVar16 == uVar4) {
        FUN_00aa2c5c();
        uVar4 = *(uint *)(iVar11 + 0x10);
        uVar16 = *(uint *)(iVar11 + 0x1c);
      }
      uVar10 = *(int *)(iVar11 + 0x18) + uVar16;
      *(uint *)(iVar11 + 0x1c) = uVar16 + 1;
      uVar16 = uVar10 - uVar4;
      if (uVar10 < uVar4) {
        uVar16 = uVar10;
      }
      FUN_016dd1aa(uVar16 * 0x118 + *(int *)(iVar11 + 0x14),local_4c8,0x118);
      uVar15 = 0;
      goto joined_r0x00992ef8;
    }
    FUN_016dd1aa(&local_298,local_4c8,0x118);
    uVar16 = (uint)&local_298 | 4;
    while (piVar8 = local_298, iVar9 != 0) {
      *(int *)(iVar11 + 0x2c) = iVar9 + -1;
      uVar10 = *(int *)(iVar11 + 0x28) + 1;
      puVar6 = (undefined4 *)(*(int *)(iVar11 + 0x24) + *(int *)(iVar11 + 0x28) * 8);
      piVar13 = (int *)*puVar6;
      uVar4 = uVar10 - *(uint *)(iVar11 + 0x20);
      if (uVar10 < *(uint *)(iVar11 + 0x20)) {
        uVar4 = uVar10;
      }
      *(uint *)(iVar11 + 0x28) = uVar4;
      iVar9 = puVar6[1];
      bVar20 = local_298 == (int *)0x3;
      local_298 = (int *)0x3;
      if (bVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886a84);
      }
      uVar10 = *(uint *)(iVar9 + 8);
      local_178 = piVar8;
      FUN_016dd1aa((uint)&local_178 | 4,uVar16,0x114);
      uVar4 = uVar10;
      if (uVar10 < 9) {
        uVar4 = 8;
      }
      uVar4 = uVar4 - 1 & 0xfffffff8;
      puVar19 = (uint *)((int)piVar13 + uVar4 + 8);
      if ((*puVar19 & 1) != 0) {
        FUN_00c379a8(&local_38,(int)piVar13 + uVar4 + 0x10);
        if (local_38 == 1) {
          local_28 = local_30;
          local_2c = local_34;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01868c88,&DAT_01886a94);
        }
        piVar8 = local_34 + 2;
        if (*piVar8 != 3) {
          FUN_0098f464(piVar8);
        }
        FUN_016dd1aa(piVar8,&local_178,0x118);
        if (((local_30 == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(local_34 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *local_34;
          bVar20 = (bool)hasExclusiveAccess(local_34);
        } while (!bVar20);
        *local_34 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,local_34,0x81,1);
        }
        if (((local_5f4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(iVar11 + 0xc) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar20 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar20);
        *piVar12 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar12,0x81,1);
        }
        bVar20 = false;
        (**(code **)(iVar9 + 0xc))((int)puVar19 + (uVar10 - 1 & 0xfffffed8) + 0x128);
LAB_009930b8:
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac364(piVar13,iVar9);
        }
        if (local_298 != (int *)0x3) {
          FUN_0098f464(&local_298);
        }
        if (bVar20) goto LAB_00993104;
        goto LAB_00993148;
      }
      if (piVar8 == (int *)0x4) {
        bVar20 = true;
        goto LAB_009930b8;
      }
      local_3b0[0] = piVar8;
      FUN_016dd1aa((uint)local_3b0 | 4,uVar16,0x114);
      iVar5 = (**(code **)(iVar9 + 0xc))((int)puVar19 + (uVar10 - 1 & 0xfffffed8) + 0x128);
      if (iVar5 == 0) {
        FUN_0098f3f0(iVar11 + 0x10,local_3b0);
        if (((local_5f4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(iVar11 + 0xc) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar20 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar20);
        *piVar12 = 0;
        bVar20 = false;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar12,0x81,1);
        }
        goto LAB_009930b8;
      }
      FUN_016dd1aa(&local_178,&local_298,0x118);
      FUN_016dd1aa(&local_298,local_3b0,0x118);
      if (local_178 != (int *)0x3) {
        FUN_0098f464(&local_178);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar13;
        bVar20 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar20);
      *piVar13 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac364(piVar13,iVar9);
      }
      iVar9 = *(int *)(iVar11 + 0x2c);
    }
    if (local_298 != (int *)0x3) {
      FUN_016dd1aa((uint)&local_178 | 4,uVar16,0x114);
      local_178 = piVar8;
      FUN_0098f3f0(iVar11 + 0x10,&local_178);
    }
LAB_00993104:
    if (((local_5f4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(iVar11 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar20 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar20);
    *piVar12 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar12,0x81,1);
    }
LAB_00993148:
    uVar15 = 3;
  }
  else {
    FUN_016dd1aa(&local_298,(uint)local_4c8 | 4,0x114);
joined_r0x00992ef8:
    if (((local_5f4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(iVar11 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar20 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar20);
    *piVar12 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar12,0x81,1);
    }
    if (cVar2 == '\0') goto LAB_00993148;
    FUN_016dd1aa(&local_178,&local_298,0x114);
  }
  *param_1 = uVar15;
  FUN_016dd1aa(param_1 + 1,&local_178,0x114);
joined_r0x00993390:
  if (local_5e0 == 3) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *local_5dc;
      bVar20 = (bool)hasExclusiveAccess(local_5dc);
    } while (!bVar20);
    *local_5dc = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa8be8(local_5dc);
      return;
    }
  }
  return;
}

