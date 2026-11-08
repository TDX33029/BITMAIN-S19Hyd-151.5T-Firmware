// FUN_00dd5b64 @ 00dd5b64 size=6944 calls_out=34 calls_in=1
// strings: internally tagged enum ClientMessage | internally tagged enum ClientMessage | internally tagged enum ClientMessage | internally tagged enum ClientMessage | internally tagged enum ClientMessage | ClientMessage

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dd5b64(undefined4 *param_1,undefined4 *******param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *******pppppppuVar8;
  undefined4 uVar9;
  undefined4 *******extraout_r2;
  undefined4 *******extraout_r2_00;
  undefined4 ******ppppppuVar10;
  undefined4 *******extraout_r3;
  undefined4 *******extraout_r3_00;
  undefined4 uVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******local_4c0;
  undefined4 *******local_438;
  undefined4 *******local_434;
  undefined4 *******local_430;
  undefined4 *******local_42c;
  undefined4 *******local_428;
  undefined4 *******local_424;
  undefined4 *******local_378;
  undefined4 *******local_374;
  undefined4 *******local_370;
  undefined4 *******local_36c;
  undefined4 *******pppppppuStack_368;
  undefined4 *******pppppppuStack_364;
  undefined4 *******local_2a8;
  undefined4 *******local_2a4;
  undefined4 *******local_2a0;
  undefined4 *******local_29c;
  undefined4 local_130;
  undefined4 *******local_12c;
  undefined4 *******local_128;
  undefined4 *******local_124;
  undefined4 *******local_120;
  undefined4 *******pppppppuStack_11c;
  undefined4 *******local_118;
  undefined4 *******pppppppuStack_114;
  undefined4 *******local_60;
  undefined1 local_5c;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  undefined4 *******local_48;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  
  ppppppuVar10 = param_2[5];
  if (ppppppuVar10 < param_2[4]) {
    do {
      uVar4 = (uint)*(byte *)((int)param_2[3] + (int)ppppppuVar10);
      if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 < 0x66) {
          if (uVar4 == 0x22) {
            param_2[2] = (undefined4 ******)0x0;
            param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
            FUN_01968828(&local_2a8,param_2 + 3,param_2);
            local_370 = local_2a4;
            if (local_2a8 == (undefined4 *******)0x2) goto LAB_00dd8678;
            local_128 = local_2a0;
            uVar2 = 5;
            local_12c = local_2a4;
LAB_00dd5fa4:
            local_130 = (undefined4 *******)CONCAT31(local_130._1_3_,uVar2);
LAB_00dd6080:
            local_36c = (undefined4 *******)&DAT_00000024;
            local_370 = (undefined4 *******)0x3efbad;
            local_374 = (undefined4 *******)&SUB_00000004;
            local_378 = (undefined4 *******)&DAT_0056df8c;
            local_438 = (undefined4 *******)FUN_01967538(&local_130,&local_378,&DAT_01c1610c);
            local_430 = (undefined4 *******)0x80000015;
          }
          else {
            if (uVar4 == 0x2d) {
              param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
              uVar9 = 0;
              goto LAB_00dd60b0;
            }
            if (uVar4 != 0x5b) goto LAB_00dd5fac;
            cVar1 = *(char *)(param_2 + 7);
            *(char *)(param_2 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) == '\0') {
              local_130 = (undefined4 *******)0x18;
              goto LAB_00dd5bc4;
            }
            param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
            local_3c = (undefined4 *******)CONCAT31(local_3c._1_3_,1);
            local_40 = param_2;
            FUN_014db6fc(&local_130,&local_40);
            if ((char)local_130 == '\x01') goto LAB_00dd5cf8;
            if (local_130._1_1_ == '\x01') {
              FUN_00fc8c3c(&local_130,local_40);
              if ((char)local_130 == '\x01') {
LAB_00dd5cf8:
                pppppppuVar8 = local_12c;
                goto LAB_00dd5d00;
              }
              pppppppuVar8 = (undefined4 *******)((uint)local_130 >> 8 & 0xff);
              FUN_0127fdcc(&local_130,local_40,(uint)local_3c & 0xff);
              if (local_130 == (undefined4 *******)0x80000015) goto LAB_00dd5cf8;
              puVar5 = (undefined4 *)((uint)&local_130 | 4);
              local_2a8 = (undefined4 *******)*puVar5;
              local_2a4 = (undefined4 *******)puVar5[1];
              local_2a0 = (undefined4 *******)puVar5[2];
              local_370 = local_130;
            }
            else {
              local_12c = (undefined4 *******)&DAT_0132b6a0;
              local_130 = &local_378;
              local_374 = (undefined4 *******)&SUB_00000004;
              local_378 = (undefined4 *******)&DAT_0056df8c;
              pppppppuVar8 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_130);
LAB_00dd5d00:
              local_370 = (undefined4 *******)0x80000015;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_36c = local_2a8;
            pppppppuStack_368 = local_2a4;
            pppppppuStack_364 = local_2a0;
            local_378 = pppppppuVar8;
            local_118 = (undefined4 *******)FUN_014d9568(param_2);
            local_130 = local_378;
            local_12c = local_374;
            local_128 = local_370;
            local_124 = local_36c;
            local_120 = pppppppuStack_368;
            pppppppuStack_11c = pppppppuStack_364;
            if (local_370 == (undefined4 *******)0x80000015) {
              local_430 = (undefined4 *******)0x80000015;
              local_438 = local_378;
              if (local_118 != (undefined4 *******)0x0) {
                FUN_006e6fb4(&local_118);
              }
            }
            else if (local_118 == (undefined4 *******)0x0) {
              local_438 = local_378;
              local_434 = local_374;
              local_430 = local_370;
              local_42c = local_36c;
              local_428 = pppppppuStack_368;
              local_424 = pppppppuStack_364;
            }
            else {
              local_430 = (undefined4 *******)0x80000015;
              local_438 = local_118;
              FUN_00db3970(&local_128);
            }
          }
        }
        else {
          if (uVar4 < 0x74) {
            if (uVar4 == 0x66) {
              param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
              local_370 = (undefined4 *******)FUN_012c6b8c(param_2,&DAT_0056efac,4);
              if (local_370 == (undefined4 *******)0x0) {
                uVar3 = 0;
                goto LAB_00dd607c;
              }
              goto LAB_00dd8678;
            }
            if (uVar4 == 0x6e) {
              param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
              local_370 = (undefined4 *******)FUN_012c6b8c(param_2,"ull",3);
              if (local_370 == (undefined4 *******)0x0) {
                uVar2 = 7;
                goto LAB_00dd5fa4;
              }
              goto LAB_00dd8678;
            }
          }
          else {
            if (uVar4 == 0x74) {
              param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
              local_370 = (undefined4 *******)FUN_012c6b8c(param_2,"rue",3);
              if (local_370 == (undefined4 *******)0x0) {
                uVar3 = 0x100;
LAB_00dd607c:
                local_130 = (undefined4 *******)CONCAT22(local_130._2_2_,uVar3);
                goto LAB_00dd6080;
              }
              goto LAB_00dd8678;
            }
            if (uVar4 == 0x7b) {
              cVar1 = *(char *)(param_2 + 7);
              *(char *)(param_2 + 7) = cVar1 + -1;
              if ((char)(cVar1 + -1) == '\0') {
                local_130 = (undefined4 *******)0x18;
                local_370 = (undefined4 *******)FUN_012c6b30(param_2,&local_130);
                goto LAB_00dd8678;
              }
              param_2[5] = (undefined4 ******)((int)ppppppuVar10 + 1);
              local_5c = 1;
              local_4c0 = (undefined4 *******)&DAT_00000008;
              puVar5 = (undefined4 *)((uint)&local_2a8 | 4);
              puVar6 = (undefined4 *)((uint)&local_40 | 4);
              pppppppuVar12 = (undefined4 *******)0x0;
              local_48 = (undefined4 *******)0x0;
              local_4c = (undefined4 *******)&DAT_00000008;
              local_50 = (undefined4 *******)0x0;
              pppppppuVar8 = (undefined4 *******)&DAT_00000006;
              local_60 = param_2;
              goto LAB_00dd5e1c;
            }
          }
LAB_00dd5fac:
          if (9 < uVar4 - 0x30) {
            local_130 = (undefined4 *******)&DAT_0000000a;
            pppppppuVar8 = (undefined4 *******)FUN_012c6b30(param_2,&local_130);
            goto LAB_00dd87a8;
          }
          uVar9 = 1;
LAB_00dd60b0:
          FUN_012c751c(&local_378,param_2,uVar9);
          if (local_378 == (undefined4 *******)&DAT_00000003 && local_374 == (undefined4 *******)0x0
             ) goto LAB_00dd8678;
          local_124 = (undefined4 *******)&DAT_00000024;
          local_12c = (undefined4 *******)&SUB_00000004;
          local_128 = (undefined4 *******)0x3efbad;
          local_130 = (undefined4 *******)&DAT_0056df8c;
          FUN_00f86564(&local_438,&local_378,&local_130);
        }
        goto LAB_00dd623c;
      }
      ppppppuVar10 = (undefined4 ******)((int)ppppppuVar10 + 1);
      param_2[5] = ppppppuVar10;
    } while (param_2[4] != ppppppuVar10);
  }
  local_130 = (undefined4 *******)0x5;
LAB_00dd5bc4:
  local_370 = (undefined4 *******)FUN_012c6b30(param_2,&local_130);
  goto LAB_00dd8678;
LAB_00dd5e1c:
  FUN_01278868(&local_40,&local_60,&DAT_0056df8c);
  pppppppuVar7 = local_60;
  if (local_40 != (undefined4 *******)0x80000015) {
    if (local_40 == (undefined4 *******)&DAT_80000016) {
      local_370 = local_50;
      local_36c = local_4c;
      pppppppuStack_368 = local_48;
      if (pppppppuVar8 == (undefined4 *******)&DAT_00000006) {
        local_374 = (undefined4 *******)&SUB_00000004;
        local_378 = (undefined4 *******)&DAT_0056df8c;
        local_12c = (undefined4 *******)&DAT_0132b6a0;
        local_130 = &local_378;
        pppppppuVar8 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_130);
        FUN_01222378(&local_50);
        local_370 = (undefined4 *******)0x80000015;
        local_36c = extraout_r2_00;
        pppppppuStack_368 = extraout_r3_00;
      }
      goto LAB_00dd6184;
    }
    if (local_40 == (undefined4 *******)0x80000017) {
      pppppppuVar8 = local_3c;
      goto LAB_00dd6174;
    }
    local_2a8 = local_40;
    uVar9 = puVar6[1];
    uVar11 = puVar6[2];
    *puVar5 = *puVar6;
    puVar5[1] = uVar9;
    puVar5[2] = uVar11;
    FUN_0127899c(&local_378,&local_60);
    pppppppuVar7 = local_374;
    if (local_378 == (undefined4 *******)0x80000015) {
      FUN_00db3970(&local_2a8);
      pppppppuVar8 = pppppppuVar7;
      goto LAB_00dd6174;
    }
    local_120 = local_378;
    pppppppuStack_11c = local_374;
    local_118 = local_370;
    pppppppuStack_114 = local_36c;
    local_130 = local_2a8;
    local_12c = local_2a4;
    local_128 = local_2a0;
    local_124 = local_29c;
    if (pppppppuVar12 == local_50) {
      FUN_0126727c(&local_50);
      local_4c0 = local_4c;
    }
    pppppppuVar7 = local_4c0 + (int)pppppppuVar12 * 8;
    pppppppuVar12 = (undefined4 *******)((int)pppppppuVar12 + 1);
    *pppppppuVar7 = local_130;
    pppppppuVar7[1] = local_12c;
    pppppppuVar7[2] = local_128;
    pppppppuVar7[3] = local_124;
    pppppppuVar7[4] = local_120;
    pppppppuVar7[5] = pppppppuStack_11c;
    pppppppuVar7[6] = local_118;
    pppppppuVar7[7] = pppppppuStack_114;
    local_48 = pppppppuVar12;
    goto LAB_00dd5e1c;
  }
  if (pppppppuVar8 != (undefined4 *******)&DAT_00000006) {
    local_374 = (undefined4 *******)&SUB_00000004;
    local_378 = (undefined4 *******)&DAT_0056df8c;
    local_12c = (undefined4 *******)&DAT_0132b6a0;
    local_130 = &local_378;
    pppppppuVar8 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_130);
    goto LAB_00dd6174;
  }
  pppppppuVar8 = (undefined4 *******)FUN_0167459c(local_60);
  if (pppppppuVar8 == (undefined4 *******)0x0) {
    FUN_00fc8c3c(&local_130,pppppppuVar7);
    if ((char)local_130 != '\0') goto LAB_00dd6170;
    pppppppuVar8 = (undefined4 *******)((uint)local_130 >> 8 & 0xff);
    goto LAB_00dd5e1c;
  }
  local_12c = pppppppuVar8;
LAB_00dd6170:
  pppppppuVar8 = local_12c;
LAB_00dd6174:
  FUN_01222378(&local_50);
  local_370 = (undefined4 *******)0x80000015;
  local_36c = extraout_r2;
  pppppppuStack_368 = extraout_r3;
LAB_00dd6184:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_378 = pppppppuVar8;
  local_118 = (undefined4 *******)FUN_012c7b64(param_2);
  local_130 = local_378;
  local_12c = local_374;
  local_128 = local_370;
  local_124 = local_36c;
  local_120 = pppppppuStack_368;
  pppppppuStack_11c = pppppppuStack_364;
  if (local_370 == (undefined4 *******)0x80000015) {
    local_430 = (undefined4 *******)0x80000015;
    local_438 = local_378;
    if (local_118 != (undefined4 *******)0x0) {
      FUN_006e6fb4(&local_118);
    }
  }
  else if (local_118 == (undefined4 *******)0x0) {
    local_438 = local_378;
    local_434 = local_374;
    local_430 = local_370;
    local_42c = local_36c;
    local_428 = pppppppuStack_368;
    local_424 = pppppppuStack_364;
  }
  else {
    local_430 = (undefined4 *******)0x80000015;
    local_438 = local_118;
    FUN_00db3970(&local_128);
  }
LAB_00dd623c:
  pppppppuVar8 = local_438;
  if (local_430 == (undefined4 *******)0x80000015) {
LAB_00dd87a8:
    local_370 = (undefined4 *******)FUN_0127dee8(pppppppuVar8,param_2);
  }
  else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_438 & 0xff) {
    case 0:
      pppppppuVar8 = (undefined4 *******)&DAT_00000015;
      if ((int)local_430 < 0) {
        pppppppuVar8 = local_430;
      }
                    /* WARNING: Could not recover jumptable at 0x00dd629c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00dd62a0 + *(int *)(&UNK_00dd62a0 + (int)pppppppuVar8 * 4)))();
      return;
    case 1:
      pppppppuVar8 = (undefined4 *******)&DAT_00000015;
      if ((int)local_430 < 0) {
        pppppppuVar8 = local_430;
      }
                    /* WARNING: Could not recover jumptable at 0x00dd64a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00dd64a8 + *(int *)(&UNK_00dd64a8 + (int)pppppppuVar8 * 4)))();
      return;
    case 2:
      pppppppuVar8 = (undefined4 *******)&DAT_00000015;
      if ((int)local_430 < 0) {
        pppppppuVar8 = local_430;
      }
                    /* WARNING: Could not recover jumptable at 0x00dd63bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00dd63c0 + *(int *)(&UNK_00dd63c0 + (int)pppppppuVar8 * 4)))();
      return;
    case 4:
      pppppppuVar8 = (undefined4 *******)&DAT_00000015;
      if ((int)local_430 < 0) {
        pppppppuVar8 = local_430;
      }
                    /* WARNING: Could not recover jumptable at 0x00dd632c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00dd6330 + *(int *)(&UNK_00dd6330 + (int)pppppppuVar8 * 4)))();
      return;
    case 5:
      pppppppuVar8 = (undefined4 *******)&DAT_00000015;
      if ((int)local_430 < 0) {
        pppppppuVar8 = local_430;
      }
                    /* WARNING: Could not recover jumptable at 0x00dd6534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00dd6538 + *(int *)(&UNK_00dd6538 + (int)pppppppuVar8 * 4)))();
      return;
    }
    local_370 = local_428;
    local_124 = (undefined4 *******)0x13;
    local_130 = (undefined4 *******)0x3efbd1;
    local_12c = (undefined4 *******)0xd;
    local_374 = local_42c;
    local_378 = local_430;
    local_36c = local_424;
    local_128 = (undefined4 *******)0x3efbde;
    local_370 = (undefined4 *******)FUN_0127f628(&local_378,&local_130);
    if (local_370 == (undefined4 *******)0x0) {
      *param_1 = 3;
      return;
    }
  }
LAB_00dd8678:
  *param_1 = 6;
  param_1[1] = local_370;
  return;
}

