// FUN_01686ab8 @ 01686ab8 size=192 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01686ab8(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_14;
  undefined1 local_13;
  uint local_10;
  uint local_c;
  
  if (*param_1 == 5) {
    uVar1 = param_1[1];
    uVar3 = 0;
  }
  else {
    local_10 = *param_1;
    iVar2 = 2;
    if (2 < local_10) {
      iVar2 = local_10 - 3;
    }
    if (iVar2 == 0) {
      uVar3 = 1;
      local_14 = 1;
      local_10 = param_2;
      uVar1 = FUN_016cc61c(&local_14);
    }
    else {
      if (iVar2 == 1) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_004ce84e,0x24,&DAT_01d084dc);
        }
        local_10 = param_2 - 1;
        local_13 = (undefined1)param_1[1];
        local_14 = 0;
      }
      else {
        local_14 = 3;
        local_c = param_1[1];
      }
      uVar1 = FUN_016cc61c(&local_14);
      uVar3 = 1;
    }
  }
  return CONCAT44(uVar1,uVar3);
}

