// FUN_009579c0 @ 009579c0 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_009579c0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_24 [12];
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0xc);
    param_3 = param_3 << 5;
    do {
      uVar1 = puVar5[-3];
      if (uVar1 != 0x80000015) {
        uVar2 = 0x15;
        if ((int)uVar1 < 0) {
          uVar2 = uVar1 ^ 0x80000000;
        }
        if (uVar2 == 0xf) {
          uVar3 = puVar5[-2];
          uVar4 = puVar5[-1];
        }
        else {
          if (uVar2 != 0xe) goto LAB_009579f8;
          uVar3 = puVar5[-1];
          uVar4 = *puVar5;
        }
        FUN_00fab1e0(auStack_24,uVar3,uVar4);
      }
LAB_009579f8:
      puVar5 = puVar5 + 8;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  *param_1 = 2;
  return;
}

