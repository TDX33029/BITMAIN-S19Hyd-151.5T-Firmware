// FUN_005ca258 @ 005ca258 size=156 calls_out=4 calls_in=0
// strings: 

void FUN_005ca258(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_f8 [112];
  int local_88 [30];
  
  iVar1 = FUN_016343a0(param_1,param_1 + 0xa8,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_016dd1aa(local_88,param_1 + 0x30,0x78);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_88[0] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00413073,0x45,&DAT_018ac3a0);
    }
    FUN_016dd1aa(auStack_f8,param_1 + 0x38,0x70);
    if (*param_2 != 3) {
      FUN_005c18f8(param_2);
    }
    FUN_016dd1aa(param_2,auStack_f8,0x70);
  }
  return;
}

