// FUN_01aef53c @ 01aef53c size=148 calls_out=0 calls_in=1
// strings: 

void FUN_01aef53c(undefined4 *param_1,int *param_2,uint param_3,int param_4,uint param_5,
                 uint param_6)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar3 = param_2[2];
  uVar6 = 0x80000001;
  if (uVar3 < (uint)param_2[1]) {
    uVar5 = uVar3 + 1;
    param_2[2] = uVar5;
    cVar1 = *(char *)(*param_2 + uVar3);
    bVar4 = cVar1 - 0x30;
    bVar7 = 8 < bVar4;
    if (bVar4 < 10) {
      bVar7 = (uint)param_2[1] <= uVar5;
    }
    if (!bVar7) {
      cVar2 = *(char *)(*param_2 + uVar5);
      param_2[2] = uVar3 + 2;
      if ((((byte)(cVar2 - 0x30U) < 10) &&
          (uVar3 = (uint)(byte)(cVar2 + -0x30 + (cVar1 + -0x30) * '\n'),
          (uint)-param_4 < (uint)(param_3 <= uVar3))) &&
         (param_6 != 0 || param_6 < (uVar3 <= param_5))) {
        uVar6 = 0x8000002d;
        param_1[2] = uVar3;
        param_1[3] = 0;
      }
    }
  }
  *param_1 = uVar6;
  return;
}

