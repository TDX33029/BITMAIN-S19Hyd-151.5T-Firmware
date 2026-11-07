// FUN_01596a18 @ 01596a18 size=144 calls_out=1 calls_in=3
// strings: 

uint FUN_01596a18(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  double dVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar1 = (param_1 & 0xf) >> 3;
    break;
  case 1:
    uVar1 = (param_1 & 3) >> 1;
    break;
  case 2:
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((uVar1 == 0 && (1 < *(uint *)(param_2 + 8)) <= uVar1) ||
       (dVar3 = *(double *)(param_2 + 0x10),
       uVar2 = FUN_01be6548(SUB84(dVar3,0),uVar1 - (1 >= *(uint *)(param_2 + 8))),
       dVar3 - (double)CONCAT44(extraout_s1,uVar2) == 0.0)) {
      uVar1 = 1;
      if ((param_1 & 4) == 0) {
        uVar1 = (param_1 & 0x1f) >> 4;
      }
    }
    else {
      uVar1 = (param_1 & 0x1f) >> 4;
    }
    break;
  case 3:
    uVar1 = (param_1 & 0x7f) >> 6;
    break;
  case 4:
    uVar1 = param_1 & 1;
    break;
  case 5:
    uVar1 = (param_1 & 0x3f) >> 5;
  }
  return uVar1;
}

