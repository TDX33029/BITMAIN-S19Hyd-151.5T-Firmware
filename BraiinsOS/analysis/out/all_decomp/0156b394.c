// FUN_0156b394 @ 0156b394 size=724 calls_out=3 calls_in=0
// strings: 

void FUN_0156b394(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_73 [4];
  undefined4 local_6f;
  undefined4 local_6b;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_73[0] = *(undefined1 *)(param_2 + 0x10);
  local_73[1] = *(undefined1 *)(param_2 + 0x11);
  local_73[2] = *(undefined1 *)(param_2 + 0x12);
  local_73[3] = *(undefined1 *)(param_2 + 0x13);
  local_6f = (uint)*(byte *)(param_2 + 0x14) ^ param_4 >> 0x18 |
             ((uint)*(byte *)(param_2 + 0x15) ^ param_4 >> 0x10 & 0xff) << 8 |
             ((uint)*(byte *)(param_2 + 0x16) ^ param_4 >> 8 & 0xff) << 0x10 |
             ((uint)*(byte *)(param_2 + 0x17) ^ param_4 & 0xff) << 0x18;
  local_6b = (uint)*(byte *)(param_2 + 0x18) ^ param_3 >> 0x18 |
             ((uint)*(byte *)(param_2 + 0x19) ^ param_3 >> 0x10 & 0xff) << 8 |
             ((uint)*(byte *)(param_2 + 0x1a) ^ param_3 >> 8 & 0xff) << 0x10 |
             ((uint)*(byte *)(param_2 + 0x1b) ^ param_3 & 0xff) << 0x18;
  uVar3 = (*(uint **)(param_2 + 0x24))[1];
  if (uVar3 == 0 && (param_8 <= **(uint **)(param_2 + 0x24)) <= uVar3) {
    puVar2 = local_73;
  }
  else {
    puVar2 = &local_5c;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_5c = local_73[0];
    local_5b = local_73[1];
    local_5a = local_73[2];
    local_59 = local_73[3];
    local_58 = local_6f;
    local_54 = local_6b;
    iVar1 = FUN_017235e4(*(undefined4 *)(param_2 + 0x20),param_7,&local_50,&local_3c,0x10,puVar2,0xc
                         ,param_7,param_8,0,0,param_5,param_6);
    uVar3 = local_3c;
    if (iVar1 == 1) {
      local_38 = local_50;
      local_34 = local_4c;
      local_30 = local_48;
      local_2c = local_44;
      bVar4 = 0x10 < local_3c;
      local_5c = 0;
      local_3c = local_3c & 0xffffff00;
      local_5d = 0;
      local_60 = 0;
      local_61 = 0;
      local_62 = 0;
      local_63 = 0;
      local_64 = 0;
      local_65 = 0;
      local_66 = 0;
      local_67 = 0;
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar3,0x10,&DAT_01857860);
      }
      if (uVar3 != 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7204(0x10,uVar3,&DAT_018a77e0);
      }
      param_1[1] = local_50;
      param_1[2] = local_4c;
      param_1[3] = local_48;
      param_1[4] = local_44;
      *param_1 = 0x80000029;
      return;
    }
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *param_1 = 0x8000001a;
  return;
}

