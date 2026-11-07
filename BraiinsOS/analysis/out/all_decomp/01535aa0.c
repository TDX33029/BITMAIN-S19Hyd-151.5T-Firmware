// FUN_01535aa0 @ 01535aa0 size=244 calls_out=5 calls_in=0
// strings: 

void FUN_01535aa0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_b0 [64];
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 auStack_60 [64];
  uint local_20;
  
  FUN_016dd606(auStack_b0,0,0x40);
  uVar2 = *(uint *)(*(int *)(param_2 + 0x4c) + 0xc);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x40,&DAT_018a7a54);
  }
  if (uVar2 <= (uint)(*(int *)(*(int *)(param_2 + 0x48) + 0xc) * 0xff)) {
    local_70 = param_2;
    local_6c = param_3;
    local_68 = param_4;
    local_64 = uVar2;
    iVar1 = FUN_01535bb0(&local_70,auStack_b0,uVar2);
    if (iVar1 == 0) {
      FUN_016dd606(auStack_60,0,0x40);
      local_20 = uVar2;
      FUN_016dd1aa(auStack_60,auStack_b0,uVar2);
      FUN_016dd1aa(param_1,auStack_60,0x44);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,auStack_60,&DAT_018a7c24,&DAT_018a7a44);
}

