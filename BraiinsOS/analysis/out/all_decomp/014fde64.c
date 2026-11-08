// FUN_014fde64 @ 014fde64 size=276 calls_out=3 calls_in=4
// strings: _... | _...

uint FUN_014fde64(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  uint local_28;
  uint local_24;
  
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_00faace8(iVar2,&DAT_004144fe,1);
    if (iVar1 == 0) {
      if (param_3 == 0 && param_4 == 0) {
        uVar4 = FUN_00faace8(iVar2,"_...",1);
        return uVar4;
      }
      uVar4 = param_1[5];
      if ((uint)-param_4 < (uint)(param_3 <= uVar4)) {
        uVar3 = uVar4 - param_3;
        uVar4 = -(param_4 + (uint)(uVar4 < param_3));
        if (uVar4 == 0 && (0x19 < uVar3) <= uVar4) {
          local_2c = uVar3 + 0x61;
          uVar4 = FUN_00faaf34(&local_2c,iVar2);
        }
        else {
          iVar1 = FUN_00faace8(iVar2,"_...",1);
          if (iVar1 != 0) {
            return 1;
          }
          local_28 = uVar3;
          local_24 = uVar4;
          uVar4 = FUN_00fac4cc(&local_28,iVar2);
        }
      }
      else {
        iVar2 = FUN_00faace8(iVar2,&DAT_00564580,0x10);
        uVar4 = (uint)(iVar2 != 0);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
        }
      }
    }
  }
  return uVar4;
}

