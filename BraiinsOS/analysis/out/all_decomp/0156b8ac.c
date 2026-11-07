// FUN_0156b8ac @ 0156b8ac size=368 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0156b8ac(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char local_5e0 [492];
  undefined4 *local_3f4;
  undefined1 auStack_3f0 [492];
  char local_204 [492];
  
  if (0x20 < *(uint *)(param_2 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_2 + 0x20),0x20,&DAT_018a7f24);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  (*(code *)*puVar2)(local_204,param_2);
  if (local_204[0] == '\x04') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_204,&DAT_018a8f2c,&DAT_018a8fc8);
  }
  FUN_016dd1aa(auStack_3f0,(uint)local_204 | 1,0x1eb);
  local_5e0[0] = local_204[0];
  FUN_016dd1aa((uint)local_5e0 | 1,auStack_3f0,0x1eb);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  local_3f4 = puVar2;
  iVar1 = thunk_FUN_016d4a50(0x1f0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1f0);
  }
  FUN_016dd1aa(iVar1,local_5e0,0x1f0);
  return CONCAT44(&PTR_LAB_018a9018,iVar1);
}

