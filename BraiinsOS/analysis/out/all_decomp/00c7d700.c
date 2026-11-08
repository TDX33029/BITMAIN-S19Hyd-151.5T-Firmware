// FUN_00c7d700 @ 00c7d700 size=160 calls_out=2 calls_in=2
// strings: 

char FUN_00c7d700(int *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = '\x04';
  if (*param_1 == 1) {
    cVar1 = FUN_00cec1d8(param_1 + 1);
    if (cVar1 != '\x04') {
      if (*param_1 != 0) {
        cVar2 = (char)param_1[0x15];
        bVar3 = cVar2 == '\x03';
        if (bVar3) {
          cVar2 = *(char *)((int)param_1 + 0x15);
        }
        if (bVar3 && cVar2 == '\x03') {
          cVar2 = (char)param_1[0x14];
          bVar3 = cVar2 == '\x03';
          if (bVar3) {
            cVar2 = *(char *)((int)param_1 + 0x2d);
          }
          if (bVar3 && cVar2 == '\x04') {
            FUN_0163bdc0(param_1 + 0xc);
            if (param_1[0x10] != 0) {
              (**(code **)(param_1[0x10] + 0xc))(param_1[0x11]);
            }
            *(undefined1 *)(param_1 + 0xb) = 0;
          }
        }
      }
      *param_1 = 0;
      cVar2 = cVar1;
    }
  }
  return cVar2;
}

