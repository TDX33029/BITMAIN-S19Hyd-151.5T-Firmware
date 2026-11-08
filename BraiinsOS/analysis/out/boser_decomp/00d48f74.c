// FUN_00d48f74 @ 00d48f74 size=1328 calls_out=14 calls_in=2
// strings: hash_chain | enabled | frequency | voltage | internal error: entered unreachable code: datetimes should only be serialized as structs; not maps | internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d48f74(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *local_418;
  int local_414;
  int local_410;
  int local_3c4;
  int local_3b0;
  undefined1 auStack_3ac [68];
  undefined4 local_368 [2];
  undefined1 auStack_360 [108];
  uint local_2f4 [3];
  int local_2e8;
  uint local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  undefined1 *local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined1 auStack_2bc [28];
  int local_2a0;
  undefined1 auStack_29c [72];
  undefined1 *local_254;
  int local_250 [2];
  undefined1 *local_248;
  int iStack_244;
  int iStack_240;
  int local_1f4;
  int local_1e0;
  undefined1 auStack_1dc [68];
  undefined1 *local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined1 *local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  undefined1 auStack_114 [100];
  undefined1 *local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  int local_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  undefined1 auStack_8c [104];
  
  FUN_00644720(&local_a0,param_2,"hash_chain",10);
  if (local_a0 != &DAT_80000005) {
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = iStack_98;
    if ((undefined1 *)*param_1 != &DAT_80000005) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                 ,0xc5,&DAT_01d2bdec);
  }
  if (*param_3 == 1) {
    iVar1 = param_3[1];
    if (iVar1 == 0) {
      local_2d4 = 0;
    }
    else {
      local_2d4 = param_3[3];
      local_2e8 = param_3[2];
      local_2e0 = 0;
      local_2f4[1] = 0;
      local_2f4[2] = iVar1;
      local_2dc = iVar1;
      local_2d8 = local_2e8;
    }
    local_2f4[0] = (uint)(iVar1 != 0);
    local_2e4 = local_2f4[0];
    FUN_01a4c5c8(&local_a0);
    iVar1 = local_90;
    local_198 = local_a0;
    iStack_194 = local_9c;
    iStack_190 = iStack_98;
    uStack_18c = uStack_94;
    FUN_01bed4e2(&local_128,auStack_8c,100);
    if (iVar1 == -0x7fffffff) {
      local_418 = local_198;
      local_414 = iStack_194;
      local_410 = iStack_190;
    }
    else {
      local_2d0 = local_198;
      iStack_2cc = iStack_194;
      iStack_2c8 = iStack_190;
      uStack_2c4 = uStack_18c;
      local_2c0 = iVar1;
      FUN_01bed4e2(auStack_2bc,&local_128,100);
      piVar6 = local_250;
      piVar2 = (int *)((uint)&local_248 | 4);
LAB_00d49100:
      do {
        uVar10 = FUN_0124d68c(local_2f4);
        piVar4 = (int *)((ulonglong)uVar10 >> 0x20);
        if ((int)uVar10 == 0) {
          FUN_01bed4e2(&local_a0,&local_2d0,0x78);
          FUN_01a4aa04(&local_418,&local_a0);
          if (local_3c4 == 8) goto LAB_00d49424;
          local_3b0 = *(int *)(param_2 + 0x30);
          *(undefined4 *)(param_2 + 0x30) = 0x80000000;
          if (local_3b0 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2bdfc);
          }
          FUN_01bed4e2(auStack_3ac,param_2 + 0x34,0x44);
          FUN_01bed4e2(auStack_360,&local_418,0x68);
          local_368[0] = 1;
          FUN_01a4b734(&local_a0,param_2,&local_3b0,local_368);
          if (local_a0 != (undefined1 *)0x4) {
            FUN_005f6530(&local_a0);
          }
          goto LAB_00d49438;
        }
        FUN_01272dac(&local_254,&local_2d0,(int)uVar10);
        if (local_254 != &DAT_80000005) {
          local_418 = local_254;
          goto LAB_00d49400;
        }
        if (local_2c0 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                       ,0xc5,&DAT_01d2bdec);
        }
        iVar7 = *piVar4;
        iVar9 = piVar4[1];
        iVar1 = piVar4[8];
        iVar5 = piVar4[4];
        iVar8 = piVar4[5];
        iVar3 = iVar7;
        if ((char)iVar1 != '\x02') {
          iVar3 = iVar7 + 1;
        }
        FUN_01a4c5c8(&local_a0,iVar3 + iVar5);
        iVar3 = local_90;
        if (local_90 == -0x7fffffff) {
          local_b0 = local_a0;
          iStack_ac = local_9c;
          iStack_a8 = iStack_98;
          local_248 = local_a0;
          iStack_244 = local_9c;
          iStack_240 = iStack_98;
        }
        else {
          local_b0 = local_a0;
          iStack_ac = local_9c;
          iStack_a8 = iStack_98;
          uStack_a4 = uStack_94;
          FUN_01bed4e2(auStack_114,auStack_8c,100);
          local_128 = local_b0;
          iStack_124 = iStack_ac;
          iStack_120 = iStack_a8;
          uStack_11c = uStack_a4;
          local_118 = iVar3;
          if (((((char)iVar1 == '\x02') ||
               (FUN_00a25ef0(&local_a0,&local_128,"enabled",7,(char)piVar4[8]),
               local_a0 == &DAT_80000005)) &&
              ((iVar7 == 0 && iVar9 == 0 ||
               (FUN_00644ddc((int)*(undefined8 *)(piVar4 + 2),&local_a0,&local_128,"frequency",9,
                             *piVar4,piVar4[1]), local_a0 == &DAT_80000005)))) &&
             ((iVar5 == 0 && iVar8 == 0 ||
              (FUN_00644ddc((int)*(undefined8 *)(piVar4 + 6),&local_a0,&local_128,"voltage",7,
                            piVar4[4],piVar4[5]), local_a0 == &DAT_80000005)))) {
            FUN_01bed4e2(&local_a0,&local_128,0x78);
            FUN_01a4aaf4(&local_248,&local_a0);
            iVar1 = local_2a0;
            if (local_1f4 != 8) {
              local_2a0 = -0x80000000;
              if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01d2bdfc);
              }
              local_1e0 = iVar1;
              FUN_01bed4e2(auStack_1dc,auStack_29c,0x44);
              FUN_01bed4e2(&iStack_190,&local_248,0x68);
              local_198 = (undefined1 *)0x1;
              FUN_01a4b734(&local_a0,&local_2d0,&local_1e0,&local_198);
              if (local_a0 != (undefined1 *)0x4) {
                FUN_005f6530(&local_a0);
              }
              goto LAB_00d49100;
            }
          }
          else {
            *piVar2 = local_9c;
            piVar2[1] = iStack_98;
            local_248 = local_a0;
            FUN_005f8054(&local_128);
          }
        }
      } while (local_248 == &DAT_80000005);
      local_418 = local_248;
      piVar6 = piVar2;
LAB_00d49400:
      local_414 = *piVar6;
      local_410 = piVar6[1];
      FUN_005f8054(&local_2d0);
    }
LAB_00d49424:
    if (local_418 != &DAT_80000005) {
      *param_1 = local_418;
      param_1[1] = local_414;
      param_1[2] = local_410;
      return;
    }
  }
LAB_00d49438:
  *param_1 = &DAT_80000005;
  return;
}

