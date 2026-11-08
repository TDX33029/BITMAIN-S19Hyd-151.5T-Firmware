// FUN_016f3784 @ 016f3784 size=132 calls_out=0 calls_in=2
// strings: 

void FUN_016f3784(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  
  bVar1 = *param_2;
  pbVar3 = param_2 + -2;
  if (bVar1 == *pbVar3) {
    bVar4 = param_2[1];
    if (param_2[-1] <= bVar4) {
      return;
    }
  }
  else {
    if (*pbVar3 <= bVar1) {
      return;
    }
    bVar4 = param_2[1];
  }
  *(undefined2 *)param_2 = *(undefined2 *)(param_2 + -2);
  if (pbVar3 == param_1) {
LAB_016f37f8:
    pbVar2 = pbVar3;
  }
  else {
    do {
      pbVar2 = pbVar3 + -2;
      bVar5 = *pbVar2 <= bVar1;
      if (bVar1 == *pbVar2) {
        bVar5 = pbVar3[-1] <= bVar4;
      }
      if (bVar5) goto LAB_016f37f8;
      *(undefined2 *)pbVar3 = *(undefined2 *)(pbVar3 + -2);
      pbVar3 = pbVar2;
    } while (pbVar2 != param_1);
  }
  *(ushort *)pbVar2 = CONCAT11(bVar4,bVar1);
  return;
}

