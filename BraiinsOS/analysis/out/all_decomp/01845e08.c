// FUN_01845e08 @ 01845e08 size=100 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01845e08(uint param_1)

{
  bool bVar1;
  uint uVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  
  uVar2 = param_1;
  if ((int)param_1 < 0) {
    uVar2 = -param_1;
  }
  dVar3 = in_d0;
  if ((uVar2 & 1) == 0) {
    dVar3 = 1.0;
  }
  dVar4 = dVar3;
  if (1 < uVar2) {
    do {
      in_d0 = in_d0 * in_d0;
      dVar3 = dVar4 * in_d0;
      if ((uVar2 & 2) == 0) {
        dVar3 = dVar4;
      }
      bVar1 = 3 < uVar2;
      uVar2 = uVar2 >> 1;
      dVar4 = dVar3;
    } while (bVar1);
  }
  if ((int)param_1 < 0) {
    dVar3 = 1.0 / dVar3;
  }
  return SUB84(dVar3,0);
}

