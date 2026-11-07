// FUN_01ad9dfc @ 01ad9dfc size=840 calls_out=6 calls_in=2
// strings: 

void FUN_01ad9dfc(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  bVar4 = true;
  bVar3 = true;
  if ((param_2[0x4f] != -0x7fffffff) && (bVar3 = true, *(int *)(param_1 + 0x13c) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x20);
    FUN_01bed4e2(param_1 + 0x20,param_2 + 8,0x130);
    bVar3 = false;
  }
  if ((param_2[0x9b] != -0x7fffffff) && (*(int *)(param_1 + 0x26c) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x150);
    FUN_01bed4e2(param_1 + 0x150,param_2 + 0x54,0x130);
    bVar4 = false;
  }
  bVar6 = true;
  bVar5 = true;
  if ((param_2[0xe7] != -0x7fffffff) && (bVar5 = true, *(int *)(param_1 + 0x39c) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x280);
    FUN_01bed4e2(param_1 + 0x280,param_2 + 0xa0,0x130);
    bVar5 = false;
  }
  if ((param_2[0x133] != -0x7fffffff) && (*(int *)(param_1 + 0x4cc) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x3b0);
    FUN_01bed4e2(param_1 + 0x3b0,param_2 + 0xec,0x130);
    bVar6 = false;
  }
  bVar7 = true;
  bVar8 = true;
  if ((param_2[0x17f] != -0x7fffffff) && (*(int *)(param_1 + 0x5fc) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x4e0);
    FUN_01bed4e2(param_1 + 0x4e0,param_2 + 0x138,0x130);
    bVar7 = false;
  }
  if ((param_2[0x1cb] != -0x7fffffff) && (*(int *)(param_1 + 0x72c) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x610);
    FUN_01bed4e2(param_1 + 0x610,param_2 + 0x184,0x130);
    bVar8 = false;
  }
  bVar2 = true;
  bVar1 = true;
  if ((param_2[0x217] != -0x7fffffff) && (*(int *)(param_1 + 0x85c) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x740);
    FUN_01bed4e2(param_1 + 0x740,param_2 + 0x1d0,0x130);
    bVar1 = false;
  }
  if ((param_2[0x263] != -0x7fffffff) && (*(int *)(param_1 + 0x98c) == -0x7fffffff)) {
    FUN_01ad2b00(param_1 + 0x870);
    FUN_01bed4e2(param_1 + 0x870,param_2 + 0x21c,0x130);
    bVar2 = false;
  }
  if (param_2[0x268] != -0x80000000) {
    FUN_0134bd64(param_2[0x268],param_2[0x269]);
  }
  if (param_2[0x26b] != -0x80000000) {
    FUN_0134bd64(param_2[0x26b],param_2[0x26c]);
  }
  FUN_00da99c8(param_2 + 0x26e);
  FUN_0096c2c4(param_2 + 0x271);
  if (bVar3) {
    FUN_01ad2b00(param_2 + 8);
  }
  if (bVar4) {
    FUN_01ad2b00(param_2 + 0x54);
  }
  if (bVar5) {
    FUN_01ad2b00(param_2 + 0xa0);
  }
  if (bVar6) {
    FUN_01ad2b00(param_2 + 0xec);
  }
  if (bVar7) {
    FUN_01ad2b00(param_2 + 0x138);
  }
  if (bVar8) {
    FUN_01ad2b00(param_2 + 0x184);
  }
  if (bVar1) {
    FUN_01ad2b00(param_2 + 0x1d0);
  }
  if (bVar2) {
    FUN_01ad2b00(param_2 + 0x21c);
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_01ada488(param_2);
  return;
}

