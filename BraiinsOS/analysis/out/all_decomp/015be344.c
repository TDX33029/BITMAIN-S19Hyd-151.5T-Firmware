// FUN_015be344 @ 015be344 size=656 calls_out=4 calls_in=1
// strings: 

void FUN_015be344(uint *param_1,int param_2,byte *param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  undefined1 local_38 [4];
  byte local_34;
  undefined2 local_33;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  byte local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  
  local_58 = *(undefined4 *)(param_2 + 0x1e0);
  uStack_54 = *(undefined4 *)(param_2 + 0x1e4);
  uStack_50 = *(undefined4 *)(param_2 + 0x1e8);
  uStack_4c = *(undefined4 *)(param_2 + 0x1ec);
  local_48 = *(uint *)(param_2 + 0x1f0);
  uStack_44 = *(uint *)(param_2 + 500);
  uStack_40 = *(uint *)(param_2 + 0x1f8);
  local_3c = *(uint *)(param_2 + 0x1fc);
  FUN_015bba1c(&local_58,param_4,param_5 >> 4);
  uVar9 = param_5 & 0xf;
  if (uVar9 != 0) {
    FUN_016dd606(local_38 + uVar9,0,0x10 - uVar9);
    FUN_016dd1aa(local_38,param_4 + (param_5 & 0x7ffffff0),uVar9);
    FUN_015bba1c(&local_58,local_38,1);
  }
  FUN_015bba1c(&local_58,param_6,param_7 >> 4);
  uVar9 = param_7 & 0xf;
  if (uVar9 != 0) {
    FUN_016dd606(local_38 + uVar9,0,0x10 - uVar9);
    FUN_016dd1aa(local_38,param_6 + (param_7 & 0x7ffffff0),uVar9);
    FUN_015bba1c(&local_58,local_38,1);
  }
  local_2b = 0;
  local_2a = 0;
  local_33 = 0;
  local_31 = 0;
  local_34 = (byte)(param_7 >> 0x1d);
  local_2c = (byte)(param_5 >> 0x1d);
  local_38[1] = (undefined1)((param_7 & 0x1fffffff) >> 5);
  local_38[2] = (undefined1)((param_7 & 0x1fffffff) >> 0xd);
  local_38[0] = (undefined1)((param_7 << 0x1b) >> 0x18);
  local_2e = (undefined1)((param_5 & 0x1fffffff) >> 0xd);
  local_38[3] = (undefined1)((param_7 & 0x1fffffff) >> 0x15);
  _local_30 = CONCAT11((char)((param_5 & 0x1fffffff) >> 5),(char)((param_5 << 0x1b) >> 0x18));
  local_2d = (undefined1)((param_5 & 0x1fffffff) >> 0x15);
  FUN_01287ea0(&local_58,local_38);
  bVar1 = param_3[2];
  bVar2 = *param_3;
  bVar3 = param_3[1];
  param_1[3] = (uint)param_3[0xc] ^ local_48 >> 0x18 |
               ((uint)param_3[0xd] ^ local_48 >> 0x10 & 0xff) << 8 |
               ((uint)param_3[0xe] ^ local_48 >> 8 & 0xff) << 0x10 |
               ((uint)param_3[0xf] ^ local_48 & 0xff) << 0x18;
  bVar4 = param_3[3];
  bVar5 = param_3[4];
  bVar6 = param_3[5];
  bVar7 = param_3[7];
  bVar8 = param_3[6];
  param_1[2] = ((uint)param_3[0xb] ^ uStack_44 & 0xff) << 0x18 |
               ((uint)param_3[10] ^ uStack_44 >> 8 & 0xff) << 0x10 |
               ((uint)param_3[9] ^ uStack_44 >> 0x10 & 0xff) << 8 |
               (uint)param_3[8] ^ uStack_44 >> 0x18;
  param_1[1] = ((uint)bVar7 ^ uStack_40 & 0xff) << 0x18 |
               ((uint)bVar8 ^ uStack_40 >> 8 & 0xff) << 0x10 |
               ((uint)bVar6 ^ uStack_40 >> 0x10 & 0xff) << 8 | (uint)bVar5 ^ uStack_40 >> 0x18;
  *param_1 = ((uint)bVar4 ^ local_3c & 0xff) << 0x18 | ((uint)bVar1 ^ local_3c >> 8 & 0xff) << 0x10
             | ((uint)bVar3 ^ local_3c >> 0x10 & 0xff) << 8 | (uint)bVar2 ^ local_3c >> 0x18;
  return;
}

