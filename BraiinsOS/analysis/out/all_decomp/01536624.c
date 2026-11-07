// FUN_01536624 @ 01536624 size=768 calls_out=5 calls_in=0
// strings: 

void FUN_01536624(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  int local_68;
  int local_64;
  int local_60;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  char local_49 [13];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if (*(int *)(param_3 + 4) != 0) {
    iVar1 = *(int *)(param_3 + 0x10) - iVar1;
  }
  iVar1 = iVar1 + 0x11;
  FUN_01533e04(&local_68,iVar1);
  local_52 = *(undefined1 *)(param_2 + 0xf);
  local_54 = *(byte *)(param_2 + 0x11) ^ (byte)((uint)param_6 >> 0x10);
  local_53 = *(byte *)(param_2 + 0x10) ^ (byte)((uint)param_6 >> 0x18);
  local_55 = *(byte *)(param_2 + 0x12) ^ (byte)((uint)param_6 >> 8);
  local_56 = *(byte *)(param_2 + 0x13) ^ (byte)param_6;
  local_57 = *(byte *)(param_2 + 0x14) ^ (byte)((uint)param_5 >> 0x18);
  local_58 = *(byte *)(param_2 + 0x15) ^ (byte)((uint)param_5 >> 0x10);
  local_4f = *(undefined1 *)(param_2 + 0xc);
  local_59 = *(byte *)(param_2 + 0x16) ^ (byte)((uint)param_5 >> 8);
  local_5a = *(byte *)(param_2 + 0x17) ^ (byte)param_5;
  local_50 = *(undefined1 *)(param_2 + 0xd);
  local_4b = (undefined1)((uint)iVar1 >> 8);
  local_51 = *(undefined1 *)(param_2 + 0xe);
  local_4c = 3;
  local_4a = (undefined1)iVar1;
  local_4e = 0x317;
  FUN_01533c94((int *)(param_3 + 4),&local_68);
  uVar2 = 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_3 + 0x14)) {
  case 1:
    uVar2 = 0x15;
    break;
  case 2:
    uVar2 = 0x16;
    break;
  case 3:
    uVar2 = 0x17;
    break;
  case 4:
    uVar2 = 0x18;
    break;
  case 5:
    uVar2 = *(undefined1 *)(param_3 + 0x15);
  }
  if (local_68 == local_60) {
    FUN_0154e5f8(&local_68,local_60,1,1,1);
  }
  *(undefined1 *)(local_64 + local_60) = uVar2;
  local_60 = local_60 + 1;
  local_3b = local_4f;
  local_33 = local_57;
  local_34 = local_56;
  local_38 = local_52;
  local_31 = local_59;
  local_3a = local_50;
  local_39 = local_51;
  local_37 = local_53;
  local_36 = local_54;
  local_35 = local_55;
  local_32 = local_58;
  local_30 = local_5a;
  local_3c = 1;
  FUN_01534c50(local_49,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),&local_3c,
               &local_4e,&local_68);
  if (local_49[0] == '\0') {
    *(undefined1 *)(param_1 + 5) = 3;
    *(undefined2 *)(param_1 + 4) = 4;
    *param_1 = 0x80000029;
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = local_60;
    return;
  }
  *param_1 = 0x8000001a;
  if (local_68 != 0) {
    thunk_FUN_016d3fb4(local_64);
  }
  return;
}

