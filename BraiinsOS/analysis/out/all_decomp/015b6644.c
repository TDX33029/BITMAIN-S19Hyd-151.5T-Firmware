// FUN_015b6644 @ 015b6644 size=728 calls_out=10 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015b6864) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_015b6644(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,uint param_8,int param_9,uint param_10)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_450 [524];
  undefined4 uStack_244;
  undefined2 local_240;
  undefined2 uStack_23e;
  undefined4 local_23c;
  undefined4 local_238;
  undefined2 local_234;
  undefined1 uStack_232;
  byte bStack_231;
  undefined4 local_230;
  uint uStack_22c;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined2 local_38 [4];
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined1 uStack_2a;
  byte bStack_29;
  byte abStack_28 [4];
  
  FUN_005eb224(&local_240,param_1);
  FUN_015be5d4(auStack_450,&local_240);
  if (param_10 < param_8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_8,param_10,&DAT_018aa30c);
  }
  FUN_016dd1aa(param_9,param_7);
  local_40 = 1;
  local_44 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  local_48 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  uVar9 = (uint)&local_50 | 4;
  local_3c = 0;
  local_4c = 0;
  local_50 = auStack_450;
  FUN_015ba604(auStack_450,uVar9,local_38);
  local_240 = SUB42(local_50,0);
  uVar3 = local_240;
  uStack_23e = (undefined2)((uint)local_50 >> 0x10);
  uVar4 = uStack_23e;
  local_23c._0_2_ = (undefined2)local_4c;
  local_23c._2_2_ = (undefined2)((uint)local_4c >> 0x10);
  local_238._0_2_ = (undefined2)local_48;
  local_238._2_2_ = (undefined2)(local_48 >> 0x10);
  local_234 = (undefined2)local_44;
  uStack_232 = (undefined1)(local_44 >> 0x10);
  bStack_231 = (byte)(local_44 >> 0x18);
  local_230 = local_40;
  uStack_22c = local_3c;
  uVar7 = param_8 & 0xf;
  if ((uVar7 != 0) && (~local_3c <= uVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_240,&DAT_018aa9a4,&DAT_018aa9b4);
  }
  local_240 = (undefined2)uVar9;
  uVar1 = local_240;
  uStack_23e = (undefined2)((uint)&local_50 >> 0x10);
  uVar2 = uStack_23e;
  iVar6 = param_9;
  uVar9 = param_8;
  if (0x10 < param_8) {
    local_234 = (undefined2)(param_8 >> 4);
    uStack_232 = (undefined1)((param_8 >> 4) >> 0x10);
    bStack_231 = (byte)(param_8 >> 0x1c);
    local_238._0_2_ = (undefined2)param_9;
    local_238._2_2_ = (undefined2)((uint)param_9 >> 0x10);
    local_23c._0_2_ = (undefined2)local_238;
    local_23c._2_2_ = local_238._2_2_;
    FUN_015b9f48(local_50,&local_240);
    iVar6 = param_9 + (param_8 & 0x7ffffff0);
    uVar9 = uVar7;
    uVar3 = local_240;
    uVar4 = uStack_23e;
  }
  uStack_23e = uVar4;
  local_240 = uVar3;
  if (uVar9 != 0) {
    iVar5 = 0x10 - uVar9;
    if (0xf < uVar9) {
      iVar5 = 0;
    }
    FUN_016dd606((int)local_38 + uVar9,0,iVar5);
    FUN_016dd1aa(local_38,iVar6,uVar9);
    local_234 = 1;
    uStack_232 = 0;
    bStack_231 = 0;
    local_240 = uVar1;
    uStack_23e = uVar2;
    local_238 = local_38;
    local_23c = local_38;
    FUN_015b9f48(local_50,&local_240);
    FUN_016dd1aa(iVar6,local_38,uVar9);
  }
  FUN_015be344(local_38,auStack_450,local_60,param_5,param_6,param_9,param_8);
  local_240 = local_38[0];
  uStack_232 = uStack_2a;
  if (&bStack_29 != abStack_28) {
    bStack_231 = bStack_29;
  }
  local_230 = 0x10;
  uStack_244 = CONCAT13(bStack_231,CONCAT12(uStack_2a,local_2c));
  if (param_10 - param_8 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x10,param_10 - param_8,&DAT_018aa31c);
  }
  puVar8 = (undefined4 *)(param_9 + param_8);
  *puVar8 = CONCAT22(local_38[1],local_38[0]);
  puVar8[3] = uStack_244;
  puVar8[2] = CONCAT22(uStack_2e,local_30);
  puVar8[1] = CONCAT22(local_38[3],local_38[2]);
  return param_8 + 0x10;
}

