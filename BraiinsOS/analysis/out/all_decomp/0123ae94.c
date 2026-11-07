// FUN_0123ae94 @ 0123ae94 size=1456 calls_out=8 calls_in=3
// strings: 

void FUN_0123ae94(undefined4 *param_1,short *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  char local_a9;
  int local_a8;
  short *local_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  char *local_80;
  uint local_7c;
  int *local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_60;
  short *local_5c;
  int local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  if (param_3 == 5) {
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_003b5293,5);
    if (iVar1 == 0) {
      uVar5 = 3;
      goto LAB_0123b380;
    }
    if (*param_2 == 0x285e) goto LAB_0123af50;
    if ((char)*param_2 != '^') goto LAB_0123b37c;
LAB_0123afbc:
    local_58 = 0;
    local_5c = (short *)0x1;
    local_60 = 0;
    pbVar6 = (byte *)((int)param_2 + param_3);
    pbVar7 = (byte *)((int)param_2 + 1);
    do {
      iVar1 = local_58;
      uVar8 = (uint)*pbVar7;
      pbVar9 = pbVar7 + 1;
      if ((char)*pbVar7 < '\0') {
        if (uVar8 < 0xe0) {
          uVar8 = pbVar7[1] & 0x3f | (uVar8 & 0x1f) << 6;
          pbVar9 = pbVar7 + 2;
          goto joined_r0x0123b0d4;
        }
        uVar3 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (0xef < uVar8) {
          uVar8 = pbVar7[3] & 0x3f | uVar3 << 6 | (uVar8 & 7) << 0x12;
          pbVar9 = pbVar7 + 4;
          goto joined_r0x0123b0d4;
        }
        uVar8 = uVar3 | (uVar8 & 0x1f) << 0xc;
        pbVar7 = pbVar7 + 3;
        pbVar9 = pbVar7;
        if (uVar8 == 0x5c) goto LAB_0123b0d8;
LAB_0123b03c:
        if (uVar8 == 0x24) {
          if (pbVar7 != pbVar6) {
            if ((uint)(int)(char)*pbVar7 < 0x80000000) {
LAB_0123b3b0:
              *param_1 = 4;
              if (local_60 == 0) {
                return;
              }
              thunk_FUN_016d3fb4(local_5c);
              return;
            }
            uVar8 = (uint)*pbVar7;
            bVar10 = uVar8 == 0xe0;
            if (0xdf < uVar8) {
              bVar10 = uVar8 == 0xef;
            }
            if ((uVar8 < 0xef || bVar10) ||
               ((undefined1 *)
                ((pbVar7[2] & 0x3f) << 6 | (pbVar7[1] & 0x3f) << 0xc | pbVar7[3] & 0x3f |
                (uVar8 & 7) << 0x12) != &DAT_00110000)) goto LAB_0123b3b0;
          }
          uVar5 = 1;
          goto LAB_0123af98;
        }
        uVar3 = uVar8 - 0x30;
        bVar10 = 9 < uVar3;
        if (bVar10) {
          uVar3 = (uVar8 & 0xffffffdf) - 0x41;
        }
        if (((bVar10 && 0x19 < uVar3) && (uVar8 != 0x2d && uVar8 != 0x5f)) && (uVar8 != 0x2f))
        goto LAB_0123b3b0;
        if (local_58 == local_60) {
          FUN_011cf828(&local_60,local_58,1,1,1);
        }
      }
      else {
joined_r0x0123b0d4:
        pbVar7 = pbVar9;
        pbVar9 = pbVar7;
        if (uVar8 != 0x5c) goto LAB_0123b03c;
LAB_0123b0d8:
        if (pbVar9 == pbVar6) goto LAB_0123b3b0;
        pbVar7 = pbVar9 + 1;
        uVar8 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar8 < 0xe0) {
            uVar8 = pbVar9[1] & 0x3f | (uVar8 & 0x1f) << 6;
            pbVar7 = pbVar9 + 2;
          }
          else {
            uVar3 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar8 < 0xf0) {
              uVar8 = uVar3 | (uVar8 & 0x1f) << 0xc;
              pbVar7 = pbVar9 + 3;
            }
            else {
              pbVar7 = pbVar9 + 4;
              uVar8 = pbVar9[3] & 0x3f | uVar3 << 6 | (uVar8 & 7) << 0x12;
            }
          }
        }
        if (((0xb < uVar8 - 0x24) || ((1 << (uVar8 - 0x24 & 0xff) & 0xe01U) == 0)) &&
           (uVar8 != 0x5f)) goto LAB_0123b3b0;
        if (local_58 == local_60) {
          FUN_011cf828(&local_60,local_58,1,1,1);
        }
      }
      *(char *)((int)local_5c + local_58) = (char)uVar8;
      local_58 = iVar1 + 1;
    } while (pbVar7 != pbVar6);
LAB_0123af90:
    uVar5 = 0;
LAB_0123af98:
    param_1[1] = local_60;
    param_1[2] = local_5c;
    *param_1 = uVar5;
    param_1[3] = local_58;
    return;
  }
  if (param_3 < 2) {
    if ((param_3 != 0) && ((char)*param_2 == '^')) {
      local_58 = 0;
      local_5c = (short *)0x1;
      local_60 = 0;
      goto LAB_0123af90;
    }
  }
  else {
    if ((*param_2 == 0x285e) && ((param_3 & 0xfffffffe) != 2)) {
LAB_0123af50:
      local_a4 = param_2 + 1;
      if (*(short *)((int)local_a4 + (param_3 - 4)) == 0x2429) {
        local_80 = &local_a9;
        iStack_a0 = param_3 - 4;
        uStack_9c = 0;
        local_84 = CONCAT22(local_84._2_2_,1);
        local_90 = CONCAT31(local_90._1_3_,1);
        local_94 = 0x7c;
        local_a8 = 0x7c;
        local_a9 = '\0';
        local_8c = 0;
        local_98 = iStack_a0;
        local_88 = iStack_a0;
        FUN_011f7484(&local_70,&local_a8);
        uVar8 = 0;
        piVar2 = (int *)&DAT_00000004;
        uVar3 = 0;
        if (local_70 != -0x80000000) {
          piVar2 = (int *)thunk_FUN_016d4a50(0x30);
          if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,0x30);
          }
          local_74 = 1;
          *piVar2 = local_70;
          piVar2[1] = local_6c;
          piVar2[2] = iStack_68;
          local_7c = 4;
          local_60 = local_a8;
          local_5c = local_a4;
          local_58 = iStack_a0;
          uStack_54 = uStack_9c;
          iStack_50 = local_98;
          local_4c = local_94;
          uStack_48 = local_90;
          uStack_44 = local_8c;
          iStack_40 = local_88;
          uStack_3c = local_84;
          pcStack_38 = local_80;
          iVar1 = 0xc;
          local_78 = piVar2;
          while( true ) {
            uVar8 = local_74;
            FUN_011f7484(&local_30,&local_60);
            if (local_30 == -0x80000000) break;
            if (uVar8 == local_7c) {
              FUN_011cf828(&local_7c,uVar8,1,4,0xc);
              piVar2 = local_78;
            }
            local_74 = uVar8 + 1;
            piVar4 = (int *)((int)piVar2 + iVar1);
            *piVar4 = local_30;
            iVar1 = iVar1 + 0xc;
            piVar4[1] = local_2c;
            piVar4[2] = iStack_28;
          }
          piVar2 = local_78;
          uVar3 = local_7c;
        }
        if (local_a9 == '\x01') {
          piVar4 = piVar2 + 1;
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            if (piVar4[-1] != 0) {
              thunk_FUN_016d3fb4(*piVar4);
            }
            piVar4 = piVar4 + 3;
          }
          if (uVar3 != 0) {
            thunk_FUN_016d3fb4(piVar2);
          }
        }
        else if (uVar3 != 0x80000000) {
          if (1 < uVar8) {
            if (uVar8 < 0x15) {
              FUN_011bbef0(piVar2,uVar8);
            }
            else {
              FUN_011cec5c(piVar2,uVar8);
            }
          }
          *param_1 = 2;
          param_1[1] = uVar3;
          param_1[2] = piVar2;
          param_1[3] = uVar8;
          return;
        }
        goto LAB_0123b37c;
      }
    }
    if ((char)*param_2 == '^') {
      local_58 = 0;
      local_5c = (short *)0x1;
      local_60 = 0;
      if (param_3 == 1) goto LAB_0123af90;
      goto LAB_0123afbc;
    }
  }
LAB_0123b37c:
  uVar5 = 4;
LAB_0123b380:
  *param_1 = uVar5;
  return;
}

