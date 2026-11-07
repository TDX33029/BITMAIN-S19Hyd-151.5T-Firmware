// FUN_009dd594 @ 009dd594 size=148 calls_out=0 calls_in=0
// strings: 

uint FUN_009dd594(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  uVar1 = *param_1 ^ 2;
  uVar2 = (uint)((uVar1 == 0 && param_1[1] == 0) && ((uVar3 ^ 2) == 0 && param_2[1] == 0));
  if ((uVar1 != 0 || param_1[1] != 0) && ((uVar3 ^ 2) != 0 || param_2[1] != 0)) {
    uVar2 = 0;
    if (param_1[4] == param_2[4] && param_1[5] == param_2[5]) {
      if ((*param_1 & 1) == 0) {
        uVar2 = uVar3 ^ 1;
      }
      else if ((uVar3 & 1) != 0) {
        uVar2 = (uint)(param_1[2] == param_2[2] && param_1[3] == param_2[3]);
      }
    }
  }
  return uVar2 & 1;
}

