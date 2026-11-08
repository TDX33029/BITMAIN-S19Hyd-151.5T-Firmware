// FUN_015590c4 @ 015590c4 size=344 calls_out=2 calls_in=3
// strings: 

void FUN_015590c4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,code *param_8,code *param_9,
                 undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 auStack_98 [64];
  uint local_58;
  ushort local_54;
  char local_52;
  undefined1 local_51;
  ushort *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar4 = param_4 - 1U & 0xff;
  puVar6 = (&PTR_DAT_018b39ec)[uVar4];
  uVar5 = *(undefined4 *)(&DAT_00422688 + uVar4 * 4);
  uVar1 = (**(code **)(param_3 + 0x14))(param_2);
  local_54 = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar1 >> 8) & 0xff;
  local_52 = (char)uVar5 + '\x06';
  local_28 = param_5;
  local_30 = &local_51;
  local_51 = (undefined1)param_6;
  local_24 = param_6;
  uStack_44 = 1;
  puStack_40 = &DAT_0040c506;
  uStack_3c = 6;
  local_2c = 1;
  local_48 = &local_52;
  local_4c = 2;
  local_50 = &local_54;
  local_38 = puVar6;
  local_34 = uVar5;
  (**(code **)(param_3 + 0x10))(auStack_98,param_2,&local_50,6);
  uVar3 = *(undefined4 *)(&DAT_004226a0 + uVar4 * 4);
  uVar5 = *(undefined4 *)(&DAT_018b3a04 + uVar4 * 4);
  iVar2 = (*param_9)(param_7,uVar5,uVar3);
  if (iVar2 != 0) {
    if (0x40 < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_58,0x40,&DAT_018a8b78);
    }
    (*param_8)(param_7,uVar5,uVar3,param_10,0x20,auStack_98,local_58);
  }
  FUN_016dd1aa(param_1,auStack_98,0x44);
  return;
}

