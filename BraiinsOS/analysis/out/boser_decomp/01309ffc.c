// FUN_01309ffc @ 01309ffc size=72 calls_out=1 calls_in=0
// strings: 

bool FUN_01309ffc(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 + param_3;
  if (!CARRY4(uVar1,param_3) && 0x15 >= uVar2) {
    FUN_01bed4e2((int)param_1 + uVar1 + 4);
    *param_1 = uVar2;
  }
  return CARRY4(uVar1,param_3) || 0x15 < uVar2;
}

