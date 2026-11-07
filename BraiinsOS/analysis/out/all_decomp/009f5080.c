// FUN_009f5080 @ 009f5080 size=2288 calls_out=21 calls_in=3
// strings: Cannot get parent path | BUG: basepath.file_name() returns error

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009f5080(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  byte bVar12;
  code *pcVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint *puVar24;
  uint *unaff_r9;
  undefined1 *puVar25;
  bool bVar26;
  longlong lVar27;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  uint *local_9c;
  uint *local_98;
  undefined1 local_94;
  uint *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  int *local_78;
  uint *local_70;
  uint *local_6c;
  undefined4 local_68;
  char local_64;
  undefined2 local_63;
  undefined1 local_61;
  uint *local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int *piStack_50;
  undefined4 uStack_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *local_30;
  undefined4 uStack_2c;
  
  bVar26 = false;
  local_a8 = 0;
  local_b0 = 0;
  if (param_3 != (uint *)0x0) {
    bVar26 = (char)*param_2 == '/';
  }
  local_68 = (uint *)CONCAT31(local_68._1_3_,6);
  local_54 = CONCAT22(CONCAT11(local_54._3_1_,bVar26),0x201);
  local_70 = param_2;
  local_6c = param_3;
  FUN_015c7164(&local_48,&local_70);
  if ((char)local_48 != '\t') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: basepath.file_name() returns error",0x27,&DAT_0186b5fc);
  }
  FUN_006008c8(&local_a4,local_44,local_40);
  if ((param_3 == (uint *)0x0) || ((char)*param_2 != '/')) {
    FUN_015bff34(&local_70);
    if (local_70 == (uint *)&DAT_80000000) {
      param_1[1] = local_6c;
      param_1[2] = local_68;
      *param_1 = 1;
      local_70 = (uint *)&DAT_80000000;
      goto joined_r0x009f53dc;
    }
    local_44 = local_6c;
    local_48 = local_70;
    local_40 = local_68;
    if (local_68 == (uint *)0x0) {
      bVar26 = false;
      if (param_3 != (uint *)0x0) goto LAB_009f51d0;
LAB_009f51e4:
      if (bVar26) {
        if (local_70 == local_68) {
          FUN_015bf41c(&local_48,local_70,1,1,1);
        }
        *(char *)((int)local_44 + (int)local_40) = '/';
        local_40 = (uint *)((int)local_40 + 1);
      }
    }
    else {
      bVar26 = ((char *)((int)local_6c + (int)local_68))[-1] != '/';
      if (param_3 == (uint *)0x0) goto LAB_009f51e4;
LAB_009f51d0:
      if ((char)*param_2 != '/') goto LAB_009f51e4;
      local_40 = (uint *)0x0;
    }
    if ((uint *)((int)local_48 - (int)local_40) < param_3) {
      FUN_015bf41c(&local_48,local_40,param_3,1,1);
    }
    puVar19 = local_40;
    puVar6 = local_44;
    puVar24 = local_48;
    FUN_016dd1aa((char *)((int)local_44 + (int)local_40),param_2,param_3);
    param_3 = (uint *)((int)puVar19 + (int)param_3);
    bVar26 = puVar24 == (uint *)0x0;
    unaff_r9 = puVar6;
    if (param_3 != (uint *)0x0) goto LAB_009f5238;
    bVar5 = false;
  }
  else {
    puVar6 = (uint *)thunk_FUN_016d4a50(param_3);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    FUN_016dd1aa(puVar6,param_2,param_3);
    bVar26 = false;
LAB_009f5238:
    bVar5 = (char)*puVar6 == '/';
  }
  local_68 = (uint *)CONCAT31(local_68._1_3_,6);
  local_54 = CONCAT22(CONCAT11(local_54._3_1_,bVar5),0x201);
  local_70 = puVar6;
  local_6c = param_3;
  FUN_015c7164(&local_48,&local_70);
  if (((uint)local_48 & 0xff) - 7 < 3) {
    lVar27 = FUN_015c7664(&local_70);
  }
  else {
    lVar27 = ZEXT48(unaff_r9) << 0x20;
  }
  iVar7 = thunk_FUN_016d4a50(0x16);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x16);
  }
  FUN_016dd1aa(iVar7,"Cannot get parent path",0x16);
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar8 = 0x16;
  puVar8[1] = iVar7;
  puVar8[2] = 0x16;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar9 + 2) = 0x28;
  *puVar9 = puVar8;
  puVar9[1] = &DAT_0186b61c;
  if ((int)lVar27 == 0) {
    param_1[1] = 3;
    param_1[2] = puVar9;
  }
  else {
    FUN_009f5b6c(puVar8);
    thunk_FUN_016d3fb4(puVar8);
    thunk_FUN_016d3fb4(puVar9);
    FUN_015f5c04(&local_70,(int)lVar27,(int)((ulonglong)lVar27 >> 0x20));
    if (local_70 != (uint *)&DAT_00000001) {
      local_98 = local_6c;
      puVar8 = (undefined4 *)((uint)&local_90 | 4);
      local_94 = (undefined1)local_68;
      puVar9 = (undefined4 *)((uint)&local_48 | 4);
      puVar10 = (undefined2 *)((uint)&local_48 | 5);
      do {
        while( true ) {
          while( true ) {
            FUN_016056c8(&local_70,&local_98);
            piVar4 = piStack_50;
            puVar19 = local_60;
            puVar24 = local_68;
            if (((uint)local_70 & 1) == 0) {
              DataMemoryBarrier(0xb);
              do {
                uVar11 = *local_98;
                bVar5 = (bool)hasExclusiveAccess(local_98);
              } while (!bVar5);
              *local_98 = uVar11 - 1;
              if (uVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_015f4880(local_98);
              }
              *param_1 = 0;
              param_1[1] = local_b0;
              param_1[2] = uStack_ac;
              param_1[3] = local_a8;
              if (!bVar26) {
                thunk_FUN_016d3fb4(puVar6);
              }
              if ((local_a4 & 0x7fffffff) == 0) {
                return;
              }
              thunk_FUN_016d3fb4(local_a0);
              return;
            }
            if (local_68 != (uint *)0x0) break;
            if (local_64 == '\x03') {
              uVar11 = *local_60;
              puVar22 = (undefined4 *)local_60[1];
              pcVar13 = (code *)*puVar22;
              if (pcVar13 != (code *)0x0) {
                (*pcVar13)(uVar11);
              }
              if (puVar22[1] != 0) {
                thunk_FUN_016d3fb4(uVar11);
              }
              thunk_FUN_016d3fb4(puVar19);
            }
          }
          *puVar10 = local_63;
          *(undefined1 *)(puVar10 + 1) = local_61;
          local_3c = local_5c;
          uStack_38 = uStack_58;
          uStack_34 = local_54;
          local_30 = piStack_50;
          uStack_2c = uStack_4c;
          local_44 = (uint *)CONCAT31(local_44._1_3_,local_64);
          local_48 = local_68;
          local_40 = local_60;
          FUN_015ed628(&local_90,piStack_50[3],piStack_50[4],local_68,(char *)((int)local_44 + -1));
          puVar25 = local_8c;
          iVar7 = FUN_015c7ac8(local_8c,local_88);
          if (local_90 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar25);
          }
          if (iVar7 != 0) break;
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar5 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar5);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015f4880(local_30);
          }
          *(char *)puVar24 = '\0';
          if (local_44 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar24);
          }
        }
        uVar18 = puVar9[1];
        uVar20 = puVar9[2];
        *puVar8 = *puVar9;
        puVar8[1] = uVar18;
        puVar8[2] = uVar20;
        uVar18 = puVar9[4];
        uVar20 = puVar9[5];
        uVar21 = puVar9[6];
        puVar8[3] = puVar9[3];
        puVar8[4] = uVar18;
        puVar8[5] = uVar20;
        puVar8[6] = uVar21;
        local_90 = puVar24;
        puVar25 = local_8c + -1;
        if (puVar25 == (undefined1 *)0x0) {
          iVar7 = 1;
        }
        else {
          iVar7 = thunk_FUN_016d4a50(puVar25);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar25);
          }
        }
        FUN_016dd1aa(iVar7,puVar24,puVar25);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *local_78;
          bVar5 = (bool)hasExclusiveAccess(local_78);
        } while (!bVar5);
        *local_78 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015f4880(local_78);
        }
        *(char *)puVar24 = '\0';
        if (local_8c != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(puVar24);
        }
        FUN_006008c8(&local_48,iVar7,puVar25);
        puVar19 = local_40;
        puVar24 = local_44;
        if ((local_40 < local_9c) || (iVar14 = thunk_FUN_016dd50a(local_a0,local_44), iVar14 != 0))
        {
          if (((uint)local_48 & 0x7fffffff) != 0) {
            puVar24 = local_44;
            goto LAB_009f5654;
          }
        }
        else {
          uVar18 = 2;
          if (&SUB_00000002 < puVar19) {
            iVar14 = thunk_FUN_016dd50a(&DAT_00378071,(char *)((int)puVar24 + (int)puVar19) + -3,3);
            if (iVar14 == 0) {
              puVar19 = (uint *)((int)puVar19 + -3);
              uVar18 = 0;
            }
            else if (puVar19 != (uint *)0x3) {
              iVar14 = thunk_FUN_016dd50a(&DAT_005687a0,(char *)((int)puVar24 + (int)puVar19) + -4,4
                                         );
              uVar18 = 2;
              if (iVar14 == 0) {
                puVar19 = puVar19 + -1;
                uVar18 = 1;
              }
            }
          }
          local_8c = &LAB_016cf57c;
          local_90 = &local_a4;
          FUN_00600d2c(&local_70,&DAT_00584e10,&local_90);
          puVar3 = local_68;
          puVar2 = local_6c;
          puVar1 = local_70;
          if ((puVar19 < local_68) ||
             (iVar14 = thunk_FUN_016dd50a(local_6c,puVar24,local_68), iVar14 != 0)) {
            if (puVar1 != (uint *)0x0) {
              thunk_FUN_016d3fb4(puVar2);
            }
          }
          else {
            if (puVar1 != (uint *)0x0) {
              thunk_FUN_016d3fb4(puVar2);
            }
            uVar11 = (int)puVar19 - (int)puVar3;
            if (uVar11 != 0) {
              pbVar17 = (byte *)((int)puVar24 + (int)puVar3);
              if (uVar11 == 1) {
                bVar12 = *pbVar17;
                if (bVar12 == 0x2b || bVar12 == 0x2d) goto LAB_009f572c;
              }
              else {
                bVar12 = *pbVar17;
              }
              uVar15 = 0;
              if (bVar12 == 0x2b) {
                pbVar17 = pbVar17 + 1;
                uVar11 = uVar11 - 1;
              }
              if (uVar11 < 9) {
                for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                  bVar12 = *pbVar17;
                  if (9 < bVar12 - 0x30) goto LAB_009f572c;
                  pbVar17 = pbVar17 + 1;
                  uVar15 = (bVar12 - 0x30) + uVar15 * 10;
                }
LAB_009f57d0:
                FUN_009f3550(&local_b0,uVar15,uVar18);
              }
              else {
                do {
                  if (uVar11 == 0) goto LAB_009f57d0;
                  uVar16 = (uint)((ulonglong)uVar15 * 10);
                  if ((int)((ulonglong)uVar15 * 10 >> 0x20) != 0) break;
                  uVar23 = *pbVar17 - 0x30;
                  uVar15 = uVar23 + uVar16;
                  if (9 < uVar23) break;
                  uVar11 = uVar11 - 1;
                  pbVar17 = pbVar17 + 1;
                } while (!CARRY4(uVar23,uVar16));
              }
            }
          }
LAB_009f572c:
          if (((uint)local_48 & 0x7fffffff) != 0) {
LAB_009f5654:
            thunk_FUN_016d3fb4(puVar24);
          }
        }
        if (puVar25 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(iVar7);
        }
      } while( true );
    }
    param_1[1] = local_6c;
    *(undefined2 *)((int)param_1 + 9) = local_68._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_68;
    *(char *)((int)param_1 + 0xb) = (char)((uint)local_68 >> 0x18);
  }
  *param_1 = 1;
  if (!bVar26) {
    thunk_FUN_016d3fb4(puVar6);
  }
joined_r0x009f53dc:
  if ((local_a4 & 0x7fffffff) == 0) {
    FUN_009f3df0(&local_b0);
    return;
  }
  thunk_FUN_016d3fb4(local_a0);
  FUN_009f3df0(&local_b0);
  return;
}

