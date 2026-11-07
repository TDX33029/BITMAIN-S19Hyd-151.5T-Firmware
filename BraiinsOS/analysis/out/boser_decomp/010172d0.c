// FUN_010172d0 @ 010172d0 size=140 calls_out=3 calls_in=3
// strings: 

void FUN_010172d0(int *param_1,int *param_2,undefined4 **param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_5c [12];
  undefined4 ***pppuStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 ***pppuStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*param_2 == -0x80000000) {
    puStack_34 = &LAB_019ba78c;
    pppuStack_50 = (undefined4 ***)param_3;
    puStack_4c = (undefined1 *)param_4;
    pppuStack_38 = &pppuStack_50;
    FUN_00664898(auStack_5c,&DAT_005b3a71,&pppuStack_38);
    FUN_019b9f84(&pppuStack_38);
    pppuStack_50 = pppuStack_38;
    puStack_4c = puStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    iVar1 = FUN_007961bc(auStack_5c,&pppuStack_50);
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

