// FUN_018b6654 @ 018b6654 size=496 calls_out=8 calls_in=0
// strings: exporterk | tls13  | exporting too much

void FUN_018b6654(undefined1 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7,undefined4 param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_184;
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [72];
  int local_f8;
  int local_a0;
  undefined1 auStack_9c [64];
  ushort local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  ushort *local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  iVar3 = *(int *)(param_2 + 0xa8);
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_0188fef8(&local_184,uVar2,1,0);
  local_2c = *(uint *)(local_184 + 0x48);
  if (local_2c < 0x41) {
    FUN_018cae5c(auStack_140,param_2 + 0x1f0,*(undefined4 *)(iVar3 + 0xc),param_5,param_6,
                 auStack_180,local_2c);
    if (param_7 == 0) {
      param_7 = 1;
      param_8 = 0;
    }
    FUN_0188fef8(&local_a0,uVar2,param_7,param_8);
    local_2c = *(uint *)(local_a0 + 0x48);
    if (local_2c < 0x41) {
      local_5c = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
      local_40 = "exporterk";
      local_44 = 6;
      local_50 = &local_5a;
      local_54 = 2;
      local_58 = &local_5c;
      local_5a = 0xe;
      local_38 = &local_59;
      local_59 = (undefined1)local_2c;
      local_30 = auStack_9c;
      local_34 = 1;
      local_3c = 8;
      local_48 = "tls13 ";
      local_4c = 1;
      if ((uint)(*(int *)(local_f8 + 0x48) * 0xff) < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01d22bec,&DAT_01d22c4c);
      }
      iVar3 = FUN_01891c24(auStack_140,&local_58,6,param_3,param_4,param_4);
      if (iVar3 == 0) {
        uVar1 = 0x14;
      }
      else {
        iVar3 = thunk_FUN_01be5118(0x12);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x12);
        }
        FUN_01bed4e2(iVar3,"exporting too much",0x12);
        *(undefined4 *)(param_1 + 4) = 0x12;
        uVar1 = 0xd;
        *(int *)(param_1 + 8) = iVar3;
        *(undefined4 *)(param_1 + 0xc) = 0x12;
      }
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(0,local_2c,0x40,&DAT_01d2571c);
}

