// FUN_00c52d54 @ 00c52d54 size=296 calls_out=2 calls_in=1
// strings: 

void FUN_00c52d54(undefined1 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  char *local_18;
  code *local_14;
  
  puVar7 = auStack_30;
  cVar1 = *param_2;
  bVar8 = cVar1 == 'F';
  if (bVar8) {
    cVar1 = param_2[2];
  }
  if (bVar8 && cVar1 == 'V') {
    cVar1 = param_2[5];
    bVar8 = cVar1 == 'B';
    if (bVar8) {
      cVar1 = param_2[7];
    }
    if (bVar8 && cVar1 == 'C') {
      if ((0xf5 < (byte)(param_2[8] - 0x3aU)) && (cVar1 = param_2[6], (byte)(cVar1 - 0x30U) < 10)) {
        bVar6 = param_2[4] - 0x30;
        bVar4 = bVar6;
        if (bVar6 < 10) {
          bVar4 = param_2[3] - 0x30;
        }
        if ((bVar4 < 10) && (cVar2 = param_2[1], (byte)(cVar2 - 0x30U) < 10)) {
          param_1[5] = param_2[8] + -0x30;
          param_1[4] = cVar1 - 0x30U;
          param_1[3] = bVar6;
          param_1[2] = bVar4;
          param_1[1] = cVar2 - 0x30U;
          *param_1 = 0;
          return;
        }
      }
      puVar7 = auStack_24;
      puVar5 = &DAT_0058a78d;
      goto LAB_00c52d9c;
    }
  }
  puVar5 = &DAT_00594039;
LAB_00c52d9c:
  local_14 = FUN_00c82aa4;
  local_18 = param_2;
  FUN_00600d2c(puVar7,puVar5,&local_18);
  uVar3 = FUN_00c6b484(puVar7);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
}

