// FUN_01538990 @ 01538990 size=164 calls_out=2 calls_in=2
// strings: 

void FUN_01538990(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_30 [16];
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar5 = *param_2;
  iVar3 = FUN_01538a34(uVar5,uVar1,param_2[-4],*(undefined1 *)(param_2 + -3));
  if (iVar3 != 0) {
    FUN_01bed4e2(auStack_30,(int)param_2 + 5,0xb);
    puVar2 = param_2 + -4;
    do {
      puVar4 = puVar2;
      puVar4[4] = *puVar4;
      puVar4[5] = puVar4[1];
      puVar4[6] = puVar4[2];
      puVar4[7] = puVar4[3];
      if (puVar4 == param_1) break;
      iVar3 = FUN_01538a34(uVar5,uVar1,puVar4[-4],*(undefined1 *)(puVar4 + -3));
      puVar2 = puVar4 + -4;
    } while (iVar3 != 0);
    *(undefined1 *)(puVar4 + 1) = uVar1;
    *puVar4 = uVar5;
    FUN_01bed4e2((int)puVar4 + 5,auStack_30,0xb);
  }
  return;
}

