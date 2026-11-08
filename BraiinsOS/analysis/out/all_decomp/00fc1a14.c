// FUN_00fc1a14 @ 00fc1a14 size=1164 calls_out=7 calls_in=2
// strings: 

void FUN_00fc1a14(undefined1 *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 auStack_1898 [520];
  undefined1 auStack_1690 [520];
  int *local_1488;
  undefined4 local_1484;
  undefined4 local_1480;
  undefined1 auStack_147c [32];
  undefined *local_145c;
  undefined4 local_1458;
  undefined1 *local_1278;
  undefined4 local_1274;
  uint local_1270;
  int *local_126c;
  int local_1268;
  int local_125c;
  byte local_1253;
  undefined1 auStack_1250 [520];
  undefined1 auStack_1048 [520];
  undefined1 auStack_e40 [520];
  undefined1 auStack_c38 [520];
  int local_a30;
  int *local_a2c;
  undefined4 local_a28;
  undefined4 auStack_a24 [6];
  undefined1 local_a0c;
  undefined1 local_a04;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined1 auStack_230 [524];
  
  if (*param_2 == -0x7ffffff2) {
    iVar3 = param_2[3];
    if (iVar3 != 2) {
      *(undefined4 *)(param_1 + 8) = 6;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(int *)(param_1 + 0x10) = iVar3;
      goto LAB_00fc1b30;
    }
    piVar5 = (int *)param_2[2];
    if (*piVar5 == -0x7ffffffb) {
      FUN_00fc2afc(&local_a30,piVar5[2],piVar5[3]);
      if (local_a30 != 1) {
        FUN_016dd1aa(auStack_230,&local_a2c,0x204);
        FUN_016dd1aa(auStack_1690,auStack_230,0x204);
        FUN_016dd1aa(auStack_1898,auStack_1690,0x204);
        FUN_00fc0dd4(&local_1270,piVar5 + 8);
        uVar4 = 0x11;
        if ((int)local_1270 < 0) {
          uVar4 = local_1270 ^ 0x80000000;
        }
        if (uVar4 == 4) {
          uVar6 = 9;
LAB_00fc2568:
          local_1480 = CONCAT31(local_1480._1_3_,uVar6);
          FUN_016dd1aa((int)&local_1480 + 1,auStack_e40,0x207);
          local_1278 = auStack_1250;
          local_1274 = 0;
          FUN_016dd1aa(auStack_1690,&local_1480,0x208);
          FUN_016dd1aa(&local_a30,auStack_1690,0x208);
          FUN_00fbd084(&local_1270);
          FUN_016dd1aa(auStack_1250,&local_a30,0x208);
          FUN_016dd1aa(auStack_1048,auStack_1898,0x204);
          FUN_016dd1aa(param_1,auStack_1250,0x410);
          *(undefined4 *)(param_1 + 0x414) = 0;
          *(int **)(param_1 + 0x410) = param_2 + 8;
          return;
        }
        bVar7 = uVar4 == 0x11;
        if (bVar7) {
          uVar4 = (uint)local_1253;
        }
        if (bVar7 && uVar4 == 2) {
          if (local_125c == 0) {
            if (local_1268 == 0) {
              uVar6 = 0xb;
            }
            else {
              local_a28 = 0;
              local_a2c = (int *)&DAT_00000004;
              local_a30 = 0;
              FUN_0127ac28(&local_a30);
              *local_a2c = 1;
              if ((local_1268 == 1) && (*local_126c == *local_a2c)) {
                uVar6 = 0xc;
              }
              else {
                if (local_a30 != 0) {
                  thunk_FUN_016d3fb4();
                }
                local_a28 = 0;
                local_a2c = (int *)&DAT_00000004;
                local_a30 = 0;
                FUN_0127ac28(&local_a30);
                *local_a2c = 2;
                if ((local_1268 != 1) || (*local_126c != *local_a2c)) {
                  if (local_a30 != 0) {
                    thunk_FUN_016d3fb4();
                  }
                  FUN_00fc0dd4(auStack_147c,&local_1270);
                  local_1458 = 0xc;
                  local_1480 = 0xe;
                  local_145c = &DAT_0036dfe6;
                  goto LAB_00fc218c;
                }
                uVar6 = 0xd;
              }
              if (local_a30 != 0) {
                thunk_FUN_016d3fb4();
              }
            }
            goto LAB_00fc2568;
          }
          FUN_00fc0dd4(auStack_147c,&local_1270);
          local_145c = (undefined *)CONCAT31(local_145c._1_3_,4);
          local_1480 = 8;
        }
        else {
          uVar4 = 0x10;
          if ((int)local_1270 < 0) {
            uVar4 = local_1270 + 0x7fffffff;
          }
          if ((uVar4 >> 1 | uVar4 << 0x1f) < 9) {
                    /* WARNING: Could not recover jumptable at 0x00fc1bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00fc1bfc + *(int *)(&DAT_00fc1bfc + (uVar4 >> 1) * 4)))();
            return;
          }
          FUN_00fc0dd4(auStack_a24,&local_1270);
          local_a04 = 5;
          local_a28 = 8;
          FUN_016dd1aa(auStack_c38,(int)&local_a28 + 1,0x207);
          FUN_016dd1aa((int)&local_1480 + 1,auStack_c38,0x207);
          local_1274 = uStack_81c;
          local_1278 = (undefined1 *)local_820;
          local_1480 = CONCAT31(local_1480._1_3_,8);
        }
LAB_00fc218c:
        FUN_016dd1aa(auStack_1690,&local_1480,0x208);
        uVar2 = local_1274;
        puVar1 = local_1278;
        FUN_016dd1aa(param_1 + 8,auStack_1690,0x208);
        *(undefined1 **)(param_1 + 0x210) = puVar1;
        *param_1 = 0xe;
        *(undefined4 *)(param_1 + 0x214) = uVar2;
        FUN_00fbd084(&local_1270);
        return;
      }
      FUN_00fc5bcc(auStack_147c,piVar5[2],piVar5[3]);
      local_1480 = auStack_a24[0];
      local_1484 = local_a28;
      local_1488 = local_a2c;
      FUN_016dd1aa(auStack_230,&local_1488,0x204);
      FUN_016dd1aa(auStack_1690,auStack_230,0x204);
      FUN_016dd1aa(param_1 + 0xc,auStack_1690,0x204);
      *(undefined4 *)(param_1 + 8) = 0xf;
      goto LAB_00fc1b30;
    }
    FUN_00fc0dd4((uint)&local_a30 | 4,piVar5);
    local_a0c = 3;
    piVar5 = local_a2c;
  }
  else {
    FUN_00fc0dd4((uint)&local_a30 | 4);
    local_a0c = 2;
    piVar5 = local_a2c;
  }
  FUN_016dd1aa(param_1 + 0x10,&local_a28,0x208);
  *(undefined4 *)(param_1 + 8) = 8;
  *(int **)(param_1 + 0xc) = piVar5;
LAB_00fc1b30:
  *param_1 = 0xe;
  return;
}

