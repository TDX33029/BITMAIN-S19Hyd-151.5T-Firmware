// FUN_017122e0 @ 017122e0 size=168 calls_out=4 calls_in=1
// strings: 

void FUN_017122e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_2c,*param_1 + 8);
  iVar1 = local_28;
  if (local_2c == 1) {
    local_1c = (undefined1)local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d194ac,&DAT_01d2c7b8);
  }
  uVar4 = local_24 & 0xff;
  local_2c = local_28 + 0x158;
  iVar2 = local_28 + 0xf0;
  iVar3 = local_28 + 8;
  local_28 = param_1[1];
  local_24 = param_1[2];
  FUN_0136cd40(iVar2,param_2,&local_2c,iVar3);
  FUN_00a97e8c(iVar1,uVar4);
  return;
}

