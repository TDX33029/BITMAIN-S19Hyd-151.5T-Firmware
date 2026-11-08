// FUN_00963958 @ 00963958 size=4600 calls_out=35 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00963958(undefined4 *param_1,undefined4 *******param_2)

{
  undefined4 *******pppppppuVar1;
  int iVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  undefined1 *puVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *******extraout_r1;
  undefined4 *******pppppppuVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 uVar17;
  undefined4 *******pppppppuVar18;
  undefined4 *******unaff_r8;
  uint uVar19;
  int iVar20;
  undefined4 *******unaff_r11;
  undefined4 *******pppppppuVar21;
  undefined4 *******pppppppuVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 *******local_570;
  undefined4 *******local_56c;
  undefined4 *******local_568;
  undefined4 *******local_564;
  undefined4 *******local_560;
  undefined4 *******local_55c;
  undefined4 *******local_548;
  undefined4 *******local_544;
  undefined4 *******local_53c;
  undefined4 *******local_534;
  undefined4 *******local_530;
  undefined4 *******local_52c;
  undefined4 *******local_528;
  undefined4 *******local_524;
  undefined4 *******local_520;
  undefined4 *******local_518;
  undefined4 *******local_514;
  undefined4 *******local_50c;
  undefined4 *******local_500;
  undefined4 local_4fc;
  undefined4 *******local_4f8;
  undefined4 *******pppppppuStack_4f4;
  undefined4 *******pppppppuStack_4f0;
  undefined4 *******local_4e8;
  undefined4 *******local_4e4;
  undefined4 *******local_4e0;
  undefined4 *******local_4dc;
  undefined4 *******local_4d0;
  undefined4 *******local_4cc;
  undefined4 *******local_4c8;
  undefined4 *******local_4c4;
  undefined4 *******local_4c0;
  undefined4 *******local_4b8;
  undefined4 *******local_4b4;
  undefined4 *******local_4b0;
  undefined4 *******local_4ac;
  undefined4 *******local_4a8;
  undefined4 *******local_4a0;
  undefined4 *******pppppppuStack_49c;
  undefined4 *******pppppppuStack_498;
  undefined4 *******local_490;
  undefined4 *******pppppppuStack_48c;
  undefined4 *******pppppppuStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined1 auStack_458 [72];
  undefined4 *******local_410;
  undefined4 *******pppppppuStack_40c;
  undefined4 *******pppppppuStack_408;
  undefined4 *******local_400;
  undefined4 *******local_3fc;
  undefined4 *******local_3f8;
  undefined1 auStack_3f4 [76];
  undefined4 *******local_3a8;
  int local_3a4;
  undefined4 *******local_358;
  undefined4 *******local_354;
  undefined4 *******local_350;
  undefined4 local_34c [63];
  undefined4 *******local_250;
  undefined4 *******local_24c;
  undefined4 *******local_248;
  undefined4 *******pppppppuStack_244;
  undefined4 *******pppppppuStack_240;
  undefined4 *******pppppppuStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 *******local_148;
  undefined4 *******local_144;
  undefined4 *******local_140;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  
  local_500 = param_2;
  FUN_0094f574(&local_250);
  if ((char)local_250 == '\x01') {
    unaff_r8 = local_24c;
    goto LAB_00963a0c;
  }
  uVar19 = (uint)local_250 >> 8 & 0xff;
  if (uVar19 == 0) {
    iVar20 = 0;
  }
  else {
    if (uVar19 != 1) {
      local_250 = (undefined4 *******)&DAT_80000004;
      local_24c = (undefined4 *******)uVar19;
      unaff_r8 = (undefined4 *******)FUN_0073696c(&local_250);
LAB_00963a0c:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = unaff_r8;
      return;
    }
    FUN_009c98e8(&local_250,param_2);
    if (local_250 == (undefined4 *******)&DAT_00000001) {
      uVar23 = CONCAT44(local_24c,1);
    }
    else {
      uVar23 = FUN_00736c0c(local_248,pppppppuStack_244);
    }
    unaff_r8 = (undefined4 *******)((ulonglong)uVar23 >> 0x20);
    iVar20 = ((uint)uVar23 & 1) + 1;
    if (iVar20 == 2) goto LAB_00963a0c;
  }
  FUN_0094f574(&local_250,param_2);
  if ((char)local_250 == '\x01') goto LAB_00963abc;
  uVar19 = (uint)local_250 >> 8 & 0xff;
  if (uVar19 == 0) {
    uVar17 = 2;
  }
  else {
    if (uVar19 != 1) {
      local_250 = (undefined4 *******)&DAT_80000004;
      local_24c = (undefined4 *******)uVar19;
      local_24c = (undefined4 *******)FUN_0073696c(&local_250);
LAB_00963abc:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_24c;
      return;
    }
    FUN_00a880cc(&local_250,param_2);
    if ((char)local_250 == '\x01') goto LAB_00963abc;
    uVar17 = (undefined1)((uint)local_250 >> 8);
  }
  FUN_0094f574(&local_250,param_2);
  if ((char)local_250 == '\x01') {
    local_248 = local_24c;
    goto LAB_00963b7c;
  }
  uVar19 = (uint)local_250 >> 8 & 0xff;
  if (uVar19 == 0) {
    pppppppuVar13 = (undefined4 *******)0x0;
    local_50c = (undefined4 *******)&DAT_00000005;
  }
  else {
    if (uVar19 != 1) {
      local_250 = (undefined4 *******)&DAT_80000004;
      local_24c = (undefined4 *******)uVar19;
      local_248 = (undefined4 *******)FUN_0073696c(&local_250);
LAB_00963b7c:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_248;
      return;
    }
    FUN_00a49f64(&local_250,param_2);
    if (local_250 == (undefined4 *******)&DAT_00000005 && local_24c == (undefined4 *******)0x0)
    goto LAB_00963b7c;
    local_50c = local_250;
    local_358 = pppppppuStack_244;
    local_354 = pppppppuStack_240;
    local_350 = pppppppuStack_23c;
    pppppppuVar13 = local_24c;
    unaff_r11 = local_248;
  }
  pppppppuVar9 = local_350;
  local_4f8 = local_358;
  pppppppuStack_4f4 = local_354;
  pppppppuStack_4f0 = local_350;
  FUN_0094f574(&local_250,param_2);
  if ((char)local_250 == '\x01') goto LAB_00963d04;
  uVar19 = (uint)local_250 >> 8 & 0xff;
  if (uVar19 != 0) {
    if (uVar19 != 1) {
      local_250 = (undefined4 *******)&DAT_80000004;
      local_24c = (undefined4 *******)uVar19;
      local_24c = (undefined4 *******)FUN_0073696c(&local_250);
      goto LAB_00963d04;
    }
    local_354 = (undefined4 *******)&DAT_00000007;
    local_358 = param_2;
    FUN_0094e544(&local_250,&local_358);
    if (local_250 == (undefined4 *******)0x2) goto LAB_00963d04;
    local_514 = local_24c;
    if (((uint)local_250 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      FUN_0094e544(&local_250,&local_358);
      pppppppuVar18 = local_354;
      pppppppuVar9 = local_358;
      if (local_250 == (undefined4 *******)0x2) goto LAB_00963d04;
      if (((uint)local_250 & 1) == 0) {
        uVar15 = 1;
      }
      else {
        local_518 = local_24c;
        if (local_354 == (undefined4 *******)0x0) {
          uVar15 = 2;
        }
        else {
          FUN_00947370(&local_250);
          if (local_250 != (undefined4 *******)0x0) goto LAB_00963d04;
          if (pppppppuVar18 == (undefined4 *******)&DAT_00000001) {
            uVar15 = 3;
          }
          else {
            unaff_d8 = CONCAT44(pppppppuStack_244,local_248);
            FUN_00abba78(&local_250,pppppppuVar9);
            pppppppuVar14 = pppppppuStack_244;
            pppppppuVar11 = local_248;
            pppppppuVar22 = local_24c;
            pppppppuVar21 = local_250;
            if (local_250 == (undefined4 *******)0x2 && local_24c == (undefined4 *******)0x0) {
              local_24c = local_248;
              goto LAB_00963d04;
            }
            if (pppppppuVar18 != (undefined4 *******)0x2) {
              local_544 = pppppppuStack_244;
              FUN_00abb70c(&local_250,pppppppuVar9);
              pppppppuVar1 = local_24c;
              pppppppuVar8 = local_250;
              if (local_250 == (undefined4 *******)&DAT_80000001) goto LAB_00963d04;
              local_548 = pppppppuVar21;
              local_520 = local_24c;
              if (pppppppuVar18 == (undefined4 *******)&DAT_00000003) {
                local_24c = (undefined4 *******)FUN_00a9d070(5,&DAT_01c0c410,&DAT_01d064b8);
              }
              else {
                local_528 = local_248;
                local_354 = pppppppuVar18 + -1;
                FUN_00abb70c(&local_250,pppppppuVar9);
                pppppppuVar9 = local_24c;
                pppppppuVar18 = local_250;
                local_524 = local_250;
                if (local_250 != (undefined4 *******)&DAT_80000001) {
                  FUN_0094ea34(&local_250,&local_358);
                  local_52c = local_250;
                  if (local_250 == (undefined4 *******)0x80000002) {
                  }
                  else {
                    if (local_250 != (undefined4 *******)&DAT_80000001) {
                      local_534 = local_24c;
                      local_530 = local_248;
                      goto LAB_00963c6c;
                    }
                    local_24c = (undefined4 *******)FUN_00a9d070(6,&DAT_01c0c410,&DAT_01d064b8);
                  }
                  if (pppppppuVar18 != (undefined4 *******)&DAT_80000000) {
                    FUN_019bb7e0(pppppppuVar18,pppppppuVar9);
                  }
                }
              }
              if (pppppppuVar8 != (undefined4 *******)&DAT_80000000) {
                FUN_019bb7e0(pppppppuVar8,pppppppuVar1);
              }
              goto LAB_00963d04;
            }
            uVar15 = 4;
          }
        }
      }
    }
    local_24c = (undefined4 *******)FUN_00a9d070(uVar15,&DAT_01c0c410,&DAT_01d064b8);
LAB_00963d04:
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_24c;
    return;
  }
  pppppppuVar22 = (undefined4 *******)0x0;
  pppppppuVar21 = (undefined4 *******)0x2;
  pppppppuVar8 = (undefined4 *******)0x0;
  pppppppuVar14 = extraout_r1;
  pppppppuVar11 = pppppppuVar13;
LAB_00963c6c:
  local_4b4 = local_534;
  local_4a8 = local_518;
  local_4c4 = local_524;
  local_4ac = local_514;
  local_4c8 = local_528;
  local_4b8 = local_52c;
  local_4cc = local_520;
  local_4b0 = local_530;
  local_4e8 = pppppppuVar21;
  local_4e4 = pppppppuVar22;
  local_4e0 = pppppppuVar11;
  local_4dc = pppppppuVar14;
  local_4d0 = pppppppuVar8;
  local_4c0 = pppppppuVar9;
  FUN_0094f574(&local_250,param_2);
  if ((char)local_250 == '\x01') {
    pppppppuVar9 = local_24c;
  }
  else {
    pppppppuVar9 = (undefined4 *******)((uint)local_250 >> 8 & 0xff);
    if (pppppppuVar9 == (undefined4 *******)0x0) {
      pppppppuVar18 = (undefined4 *******)&DAT_80000000;
LAB_00963d58:
      local_4fc = 8;
      FUN_0094f574(&local_250,param_2);
      if ((char)local_250 == '\x01') {
        pppppppuVar11 = local_24c;
LAB_0096421c:
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = pppppppuVar11;
      }
      else {
        pppppppuVar9 = (undefined4 *******)((uint)local_250 >> 8 & 0xff);
        if (pppppppuVar9 != (undefined4 *******)0x0) {
          if (pppppppuVar9 == (undefined4 *******)&DAT_00000001) {
            FUN_009c98e8(&local_250,param_2);
            if (local_250 == (undefined4 *******)&DAT_00000001) {
              uVar24 = CONCAT44(local_24c,1);
            }
            else {
              uVar24 = FUN_00736c0c(local_248,pppppppuStack_244);
            }
            pppppppuVar11 = (undefined4 *******)(uVar24 >> 0x20);
            if ((uVar24 & 1) == 0) {
              if (uVar24 < 0x300000000) {
                if (((uint)pppppppuVar11 & 0xff) == 3) {
                  pppppppuVar11 = param_2;
                }
                else {
                  FUN_00abba78(&local_250,param_2);
                  local_518 = local_250;
                  local_520 = local_24c;
                  if (local_250 != (undefined4 *******)0x2 || local_24c != (undefined4 *******)0x0)
                  {
                    local_55c = local_248;
                    local_560 = pppppppuStack_244;
                    FUN_00abba78(&local_250,param_2);
                    local_564 = local_250;
                    local_568 = local_24c;
                    if (local_250 != (undefined4 *******)0x2 || local_24c != (undefined4 *******)0x0
                       ) {
                      unaff_d8 = CONCAT44(pppppppuStack_244,local_248);
                      FUN_00abba78(&local_250,param_2);
                      local_56c = local_250;
                      local_570 = local_24c;
                      if (local_250 != (undefined4 *******)0x2 ||
                          local_24c != (undefined4 *******)0x0) {
                        unaff_d9 = CONCAT44(pppppppuStack_244,local_248);
                        goto LAB_00964124;
                      }
                    }
                  }
                  pppppppuVar11 = local_248;
                }
              }
              else {
                local_148 = (undefined4 *******)&DAT_01cfa0a4;
                local_248 = &local_148;
                local_250 = &local_358;
                local_34c[0] = 0;
                local_358 = (undefined4 *******)CONCAT31(local_358._1_3_,1);
                local_144 = (undefined4 *******)&DAT_01d064b8;
                pppppppuStack_244 = (undefined4 *******)&LAB_0196b2a4;
                local_24c = (undefined4 *******)0x1963220;
                local_350 = pppppppuVar11;
                pppppppuVar11 = (undefined4 *******)FUN_00a9cfdc(&DAT_0058eb0d,&local_250);
              }
            }
          }
          else {
            local_250 = (undefined4 *******)&DAT_80000004;
            local_24c = pppppppuVar9;
            pppppppuVar11 = (undefined4 *******)FUN_0073696c(&local_250);
          }
          goto LAB_0096421c;
        }
        local_520 = (undefined4 *******)0x0;
        local_518 = (undefined4 *******)0x2;
LAB_00964124:
        FUN_0094e718(&local_250,&local_500);
        if (local_250 == (undefined4 *******)0x80000002) {
          pppppppuVar13 = local_24c;
LAB_00964148:
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = pppppppuVar13;
        }
        else {
          if (local_250 == (undefined4 *******)&DAT_80000001) {
            pppppppuVar13 = (undefined4 *******)FUN_00a9d070(6,&DAT_01c0c420,&DAT_01d064b8);
            goto LAB_00964148;
          }
          local_4a0 = local_250;
          pppppppuStack_49c = local_24c;
          pppppppuStack_498 = local_248;
          FUN_0094ea94(&local_250,&local_500);
          pppppppuVar22 = local_248;
          pppppppuVar21 = local_24c;
          pppppppuVar9 = local_250;
          local_530 = local_248;
          if (local_250 == (undefined4 *******)&SUB_00000004 && local_24c == (undefined4 *******)0x0
             ) {
LAB_009641e8:
            param_1[1] = 0;
LAB_00964550:
            *param_1 = 3;
            param_1[2] = local_530;
          }
          else {
            local_490 = pppppppuStack_244;
            pppppppuStack_48c = pppppppuStack_240;
            pppppppuStack_488 = pppppppuStack_23c;
            uStack_484 = uStack_238;
            local_480 = local_234;
            uStack_47c = uStack_230;
            uStack_478 = uStack_22c;
            uStack_474 = uStack_228;
            local_470 = local_224;
            uStack_46c = uStack_220;
            uStack_468 = uStack_21c;
            uStack_464 = uStack_218;
            uStack_460 = uStack_214;
            if (local_250 == (undefined4 *******)&DAT_00000003 &&
                local_24c == (undefined4 *******)0x0) {
              local_530 = (undefined4 *******)FUN_00a9d070(7,&DAT_01c0c420,&DAT_01d064b8);
              goto LAB_009641e8;
            }
            FUN_0094f5dc(&local_250,&local_500);
            pppppppuVar1 = local_248;
            pppppppuVar8 = local_24c;
            pppppppuVar14 = local_250;
            local_53c = local_248;
            if (local_250 == (undefined4 *******)&DAT_00000009 &&
                local_24c == (undefined4 *******)0x0) {
LAB_00964374:
              param_1[1] = 0;
              local_530 = local_53c;
              goto LAB_00964550;
            }
            FUN_01bed4e2(auStack_458,&pppppppuStack_244,0x44);
            if (pppppppuVar14 == (undefined4 *******)&DAT_00000008 &&
                pppppppuVar8 == (undefined4 *******)0x0) {
              local_53c = (undefined4 *******)FUN_00a9d070(8,&DAT_01c0c420,&DAT_01d064b8);
              goto LAB_00964374;
            }
            FUN_0094f19c(&local_250,&local_500);
            pppppppuVar7 = local_248;
            pppppppuVar5 = local_24c;
            pppppppuVar3 = local_250;
            local_548 = local_248;
            if (local_250 == (undefined4 *******)&DAT_0000000d &&
                local_24c == (undefined4 *******)0x0) {
LAB_00964540:
              param_1[1] = 0;
              local_530 = local_548;
              goto LAB_00964550;
            }
            local_410 = pppppppuStack_244;
            pppppppuStack_40c = pppppppuStack_240;
            pppppppuStack_408 = pppppppuStack_23c;
            if (local_250 == (undefined4 *******)&DAT_0000000c &&
                local_24c == (undefined4 *******)0x0) {
              local_548 = (undefined4 *******)FUN_00a9d070(9,&DAT_01c0c420,&DAT_01d064b8);
              goto LAB_00964540;
            }
            FUN_0094e0e8(&local_250,&local_500);
            pppppppuVar12 = local_248;
            pppppppuVar6 = local_24c;
            pppppppuVar4 = local_250;
            if (local_250 == (undefined4 *******)&SUB_00000004 &&
                local_24c == (undefined4 *******)0x0) {
LAB_009646c0:
              *param_1 = 3;
              param_1[1] = 0;
              param_1[2] = pppppppuVar12;
            }
            else {
              FUN_01bed4e2(&local_3a8,&pppppppuStack_244,0x4c);
              if (pppppppuVar4 == (undefined4 *******)&DAT_00000003 &&
                  pppppppuVar6 == (undefined4 *******)0x0) {
                pppppppuVar12 = (undefined4 *******)FUN_00a9d070(10,&DAT_01c0c420,&DAT_01d064b8);
                goto LAB_009646c0;
              }
              FUN_01bed4e2(auStack_3f4,&local_3a8,0x4c);
              local_3fc = pppppppuVar6;
              local_400 = pppppppuVar4;
              local_3f8 = pppppppuVar12;
              FUN_0094ecf4(&local_250,&local_500);
              pppppppuVar12 = local_248;
              pppppppuVar6 = local_24c;
              pppppppuVar4 = local_250;
              if (local_250 == (undefined4 *******)&SUB_00000004 &&
                  local_24c == (undefined4 *******)0x0) {
LAB_00964740:
                *param_1 = 3;
                param_1[1] = 0;
                param_1[2] = pppppppuVar12;
              }
              else {
                FUN_01bed4e2(&local_148,&pppppppuStack_244,0xfc);
                if (pppppppuVar4 == (undefined4 *******)&DAT_00000003 &&
                    pppppppuVar6 == (undefined4 *******)0x0) {
                  pppppppuVar12 = (undefined4 *******)FUN_00a9d070(0xb,&DAT_01c0c420,&DAT_01d064b8);
                  goto LAB_00964740;
                }
                FUN_01bed4e2(local_34c,&local_148,0xfc);
                local_354 = pppppppuVar6;
                local_358 = pppppppuVar4;
                local_350 = pppppppuVar12;
                FUN_0094d814(&local_250,&local_500);
                if (local_250 == (undefined4 *******)&DAT_80000001) {
                  pppppppuVar13 = local_24c;
LAB_009647bc:
                  *param_1 = 3;
                  param_1[1] = 0;
                  param_1[2] = pppppppuVar13;
                }
                else {
                  if (local_250 == (undefined4 *******)&DAT_80000000) {
                    pppppppuVar13 =
                         (undefined4 *******)FUN_00a9d070(0xc,&DAT_01c0c420,&DAT_01d064b8);
                    goto LAB_009647bc;
                  }
                  local_40 = local_248;
                  local_44 = local_24c;
                  local_48 = local_250;
                  FUN_0094e5bc(&local_250,&local_500);
                  if (local_250 == (undefined4 *******)&DAT_80000001) {
                    pppppppuVar13 = local_24c;
                  }
                  else {
                    if (local_250 != (undefined4 *******)&DAT_80000000) {
                      FUN_01bed4e2(param_1,&local_4e8,0x48);
                      param_1[0xb0] = pppppppuVar18;
                      param_1[0xb1] = local_524;
                      param_1[0xb2] = local_528;
                      param_1[0xb3] = local_4a0;
                      param_1[0xb4] = pppppppuStack_49c;
                      param_1[0xb5] = pppppppuStack_498;
                      FUN_01bed4e2(param_1 + 0x30,&local_400,0x58);
                      FUN_01bed4e2(param_1 + 0x46,&local_358,0x108);
                      param_1[0xaa] = local_48;
                      param_1[0xab] = local_44;
                      param_1[0xac] = local_40;
                      param_1[0x8b] = local_4f8;
                      param_1[0x8c] = pppppppuStack_4f4;
                      param_1[0x8d] = pppppppuStack_4f0;
                      param_1[0x16] = local_564;
                      param_1[0x17] = local_568;
                      *(undefined8 *)(param_1 + 0x18) = unaff_d8;
                      param_1[0x1a] = local_56c;
                      param_1[0x1b] = local_570;
                      param_1[0x15] = local_560;
                      *(char *)(param_1 + 0x1e) = (char)pppppppuVar11;
                      *(undefined8 *)(param_1 + 0x1c) = unaff_d9;
                      param_1[0x23] = local_490;
                      param_1[0x24] = pppppppuStack_48c;
                      param_1[0x25] = pppppppuStack_488;
                      param_1[0x26] = uStack_484;
                      param_1[0x27] = local_480;
                      param_1[0x28] = uStack_47c;
                      param_1[0x29] = uStack_478;
                      param_1[0x2a] = uStack_474;
                      param_1[0x2b] = local_470;
                      param_1[0x2c] = uStack_46c;
                      param_1[0x2d] = uStack_468;
                      param_1[0x2e] = uStack_464;
                      param_1[0x2f] = uStack_460;
                      FUN_01bed4e2(param_1 + 0x91,auStack_458,0x44);
                      param_1[0xa5] = local_410;
                      param_1[0xa6] = pppppppuStack_40c;
                      param_1[0xa7] = pppppppuStack_408;
                      param_1[0x8a] = unaff_r11;
                      param_1[0x12] = local_518;
                      param_1[0x13] = local_520;
                      param_1[0xa8] = iVar20;
                      param_1[0x20] = pppppppuVar9;
                      param_1[0x21] = pppppppuVar21;
                      param_1[0x88] = local_50c;
                      param_1[0x89] = pppppppuVar13;
                      param_1[0x8e] = pppppppuVar14;
                      param_1[0x8f] = pppppppuVar8;
                      param_1[0xa2] = pppppppuVar3;
                      param_1[0xa3] = pppppppuVar5;
                      param_1[0xae] = local_24c;
                      param_1[0xaf] = local_248;
                      param_1[0x14] = local_55c;
                      param_1[0x22] = pppppppuVar22;
                      param_1[0x90] = pppppppuVar1;
                      param_1[0xad] = local_250;
                      param_1[0xa4] = pppppppuVar7;
                      param_1[0xa9] = unaff_r8;
                      *(undefined1 *)(param_1 + 0xb6) = uVar17;
                      return;
                    }
                    pppppppuVar13 =
                         (undefined4 *******)FUN_00a9d070(0xd,&DAT_01c0c420,&DAT_01d064b8);
                  }
                  *param_1 = 3;
                  param_1[1] = 0;
                  param_1[2] = pppppppuVar13;
                  FUN_00856028(&local_48);
                }
                if (pppppppuVar4 != (undefined4 *******)0x2 ||
                    pppppppuVar6 != (undefined4 *******)0x0) {
                  FUN_00b9a764(&local_358);
                }
              }
              FUN_00855fc4(&local_400);
            }
          }
          FUN_00855f74(&local_4a0);
        }
      }
      if (pppppppuVar18 != (undefined4 *******)&DAT_80000000) {
        FUN_0132b958(pppppppuVar18,local_524,8,0x30);
      }
      goto LAB_009644d4;
    }
    if (pppppppuVar9 == (undefined4 *******)&DAT_00000001) {
      FUN_009c98e8(&local_250,param_2);
      if (local_250 == (undefined4 *******)&DAT_00000001) {
        uVar24 = CONCAT44(local_24c,1);
      }
      else {
        uVar24 = FUN_00736cb4(local_248,pppppppuStack_244);
      }
      local_518 = (undefined4 *******)(uVar24 >> 0x20);
      pppppppuVar9 = local_518;
      if ((uVar24 & 1) == 0) {
        pppppppuVar9 = (undefined4 *******)0x5555;
        if (uVar24 < 0x555500000000) {
          pppppppuVar9 = local_518;
        }
        if (local_518 == (undefined4 *******)0x0) {
          local_524 = (undefined4 *******)&DAT_00000008;
          pppppppuVar9 = (undefined4 *******)0x0;
        }
        else {
          local_524 = (undefined4 *******)FUN_01298504((int)pppppppuVar9 * 0x30,8);
          if (local_524 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(8,(int)pppppppuVar9 * 0x30);
          }
        }
        iVar16 = 0x28;
        local_140 = (undefined4 *******)0x0;
        local_148 = pppppppuVar9;
        local_144 = local_524;
        while (local_528 = local_140, local_518 != local_140) {
          FUN_00947370(&local_250,param_2);
          pppppppuVar21 = pppppppuStack_244;
          pppppppuVar18 = local_248;
          if (local_250 == (undefined4 *******)&DAT_00000001) goto LAB_0096417c;
          unaff_d8 = CONCAT44(pppppppuStack_244,local_248);
          FUN_00abba78(&local_250,param_2);
          pppppppuVar8 = pppppppuStack_244;
          pppppppuVar14 = local_248;
          pppppppuVar11 = local_24c;
          pppppppuVar22 = local_250;
          if (local_250 == (undefined4 *******)0x2 && local_24c == (undefined4 *******)0x0) {
            pppppppuVar9 = pppppppuVar14;
LAB_009644b0:
            FUN_0132b958(local_148,local_524,8,0x30);
            goto LAB_009644c4;
          }
          local_3a4 = 3;
          local_3a8 = param_2;
          FUN_0094f48c(&local_250,&local_3a8);
          pppppppuVar3 = local_24c;
          iVar2 = local_3a4;
          pppppppuVar1 = local_3a8;
          pppppppuVar9 = local_24c;
          if (local_250 == (undefined4 *******)0x2) goto LAB_009644b0;
          if (((uint)local_250 & 1) == 0) {
            uVar15 = 0;
LAB_00964498:
            pppppppuVar9 = (undefined4 *******)FUN_00a9d070(uVar15,&DAT_01c0c408,&DAT_01d064b8);
LAB_009644ac:
            goto LAB_009644b0;
          }
          if (local_3a4 == 0) {
            uVar15 = 1;
            goto LAB_00964498;
          }
          FUN_009c98e8(&local_250,local_3a8);
          if (local_250 == (undefined4 *******)&DAT_00000001) {
            uVar24 = CONCAT44(local_24c,1);
          }
          else {
            uVar24 = FUN_00736c0c(local_248,pppppppuStack_244);
          }
          local_520 = (undefined4 *******)(uVar24 >> 0x20);
          if ((uVar24 & 1) != 0) {
            pppppppuVar9 = local_520;
            goto LAB_009644b0;
          }
          if (0x5ffffffff < uVar24) {
            local_400 = (undefined4 *******)&DAT_01c0ff48;
            local_248 = &local_400;
            local_250 = &local_358;
            local_350 = local_520;
            local_34c[0] = 0;
            local_358 = (undefined4 *******)CONCAT31(local_358._1_3_,1);
            local_3fc = (undefined4 *******)&DAT_01d064b8;
            pppppppuStack_244 = (undefined4 *******)&LAB_0196b2a4;
            local_24c = (undefined4 *******)0x1963220;
            pppppppuVar9 = (undefined4 *******)FUN_00a9cfdc(&DAT_0058eb0d,&local_250);
            goto LAB_009644ac;
          }
          pppppppuVar9 = pppppppuVar1;
          if (((uint)local_520 & 0xff) == 6) goto LAB_009644b0;
          if (iVar2 == 1) {
            uVar15 = 2;
            goto LAB_00964498;
          }
          FUN_0094f574(&local_250,pppppppuVar1);
          if ((char)local_250 == '\x01') {
LAB_0096417c:
            pppppppuVar9 = local_24c;
            goto LAB_009644b0;
          }
          pppppppuVar9 = (undefined4 *******)((uint)local_250 >> 8 & 0xff);
          uVar15 = 0;
          if (pppppppuVar9 != (undefined4 *******)0x0) {
            if (pppppppuVar9 != (undefined4 *******)&DAT_00000001) {
              local_250 = (undefined4 *******)&DAT_80000004;
              local_24c = pppppppuVar9;
              pppppppuVar9 = (undefined4 *******)FUN_0073696c(&local_250);
              goto LAB_009644ac;
            }
            FUN_0094ef18(&local_250,pppppppuVar1);
            if (local_250 != (undefined4 *******)&DAT_00000001) {
              local_544 = local_24c;
              FUN_0094ef18(&local_250,pppppppuVar1);
              if (local_250 != (undefined4 *******)&DAT_00000001) {
                uVar15 = 1;
                local_548 = local_24c;
                goto LAB_00964060;
              }
            }
            goto LAB_0096417c;
          }
LAB_00964060:
          if (((uint)pppppppuVar22 & 3) == 2) break;
          if (pppppppuVar22 == (undefined4 *******)&DAT_00000003) {
            pppppppuVar9 = pppppppuVar14;
            goto LAB_009644b0;
          }
          if (local_528 == local_148) {
            FUN_018061c0(&local_148);
            local_524 = local_144;
          }
          puVar10 = (undefined1 *)((int)local_524 + iVar16);
          *puVar10 = (char)(uVar24 >> 0x20);
          iVar16 = iVar16 + 0x30;
          *(undefined4 ********)(puVar10 + -8) = local_548;
          *(undefined4 ********)(puVar10 + -4) = pppppppuVar3;
          *(undefined4 ********)(puVar10 + -0x28) = pppppppuVar22;
          *(undefined4 ********)(puVar10 + -0x24) = pppppppuVar11;
          *(undefined4 ********)(puVar10 + -0xc) = local_544;
          *(undefined4 ********)(puVar10 + -0x20) = pppppppuVar14;
          local_140 = (undefined4 *******)((int)local_528 + 1);
          *(undefined4 ********)(puVar10 + -0x1c) = pppppppuVar8;
          *(undefined4 ********)(puVar10 + -0x18) = pppppppuVar18;
          *(undefined4 ********)(puVar10 + -0x14) = pppppppuVar21;
          *(undefined4 *)(puVar10 + -0x10) = uVar15;
        }
        pppppppuVar18 = local_148;
        pppppppuVar9 = local_524;
        pppppppuVar11 = local_524;
        if (-0x7fffffff < (int)local_148) goto LAB_00963d58;
      }
    }
    else {
      local_250 = (undefined4 *******)&DAT_80000004;
      local_24c = pppppppuVar9;
      pppppppuVar9 = (undefined4 *******)FUN_0073696c(&local_250);
    }
  }
LAB_009644c4:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = pppppppuVar9;
LAB_009644d4:
  FUN_00e84018(&local_4e8);
  return;
}

