// FUN_00a9c504 @ 00a9c504 size=272 calls_out=4 calls_in=0
// strings: 

void FUN_00a9c504(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_24;
  undefined1 uStack_11;
  
  if ((param_2 & 0xff) == 0) {
    local_60 = 0;
    local_64 = 1;
    local_68 = 0;
    iVar1 = FUN_00a9c650(0,&local_68);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01c0ffb8,&DAT_01d30334);
    }
    uVar2 = 500;
  }
  else {
    local_60 = 0;
    local_64 = 1;
    local_68 = 0;
    iVar1 = FUN_00a9c650(param_2,&local_68);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01c0ffb8,&DAT_01d30334);
    }
    uVar2 = 400;
  }
  local_74 = local_68;
  uStack_70 = local_64;
  uStack_6c = local_60;
  FUN_007167d4(&local_68,&local_74);
  local_24 = uVar2;
  FUN_01bed4e2(param_1,&local_68,0x50);
  return;
}

