// FUN_014f4514 @ 014f4514 size=488 calls_out=8 calls_in=2
// strings: 

void FUN_014f4514(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint local_11c;
  uint local_118 [62];
  
  if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_4,param_3,param_3,&DAT_018a6ec0);
  }
  uVar2 = param_3 - param_4;
  local_11c = uVar2 & 0xf;
  if (local_11c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_11c,&DAT_00568f30,0);
  }
  if ((DAT_018dffd8 & 4) == 0) {
    if ((DAT_018dffd8 & 1) != 0) {
      if (0x7f < uVar2) {
        FUN_016dd606(local_118,0,0xf4);
        FUN_0183be80(local_118,param_1);
        if ((uVar2 & 0x40) == 0) {
          uVar2 = uVar2 & 0x7fffff80;
        }
        if (param_3 < uVar2 + param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar2 + param_4,param_3,&DAT_018a6ea0);
        }
        FUN_0183b6c0(param_2 + param_4,param_2,uVar2 >> 4,local_118,param_5);
        uVar1 = *(uint *)(param_5 + 0xc);
        param_2 = param_2 + uVar2;
        param_3 = param_3 - uVar2;
        uVar2 = (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                uVar1 >> 0x18) + (uVar2 >> 4);
        *(uint *)(param_5 + 0xc) =
             uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
             uVar2 >> 0x18;
      }
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(param_4,param_3,param_3,&DAT_018a6e90);
      }
      param_3 = param_3 - param_4;
      local_118[0] = param_3 & 0xf;
      if (local_118[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,local_118,&DAT_00568f30,0);
      }
      FUN_0183bf40(param_2 + param_4,param_2,param_3 >> 4,param_1,param_5);
      uVar2 = *(uint *)(param_5 + 0xc);
      uVar2 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18) + (param_3 >> 4);
      *(uint *)(param_5 + 0xc) =
           uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
           uVar2 >> 0x18;
      return;
    }
    FUN_01837244(param_2 + param_4,param_2,uVar2 >> 4,param_1,param_5);
  }
  else {
    FUN_0183a9c0(param_2 + param_4,param_2,uVar2 >> 4,param_1,param_5);
  }
  uVar1 = *(uint *)(param_5 + 0xc);
  uVar2 = (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18
          ) + (uVar2 >> 4);
  *(uint *)(param_5 + 0xc) =
       uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
  ;
  return;
}

