// FUN_01aaa204 @ 01aaa204 size=116 calls_out=0 calls_in=8
// strings: 

void FUN_01aaa204(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_2 + 8) == 1) {
    puVar5 = *(uint **)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0x10);
    uVar7 = (**(code **)(iVar6 + 0x38))((int)puVar5 + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8);
    do {
      uVar4 = *puVar5;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar4 + 1;
    uVar3 = 1;
    if (0x7fffffff < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1aaa258);
      (*pcVar1)();
    }
  }
  else {
    puVar5 = *(uint **)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0x10);
    uVar7 = (**(code **)(iVar6 + 0x38))(puVar5);
    uVar3 = 0;
  }
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(uint **)((int)param_1 + 0xc) = puVar5;
  *(int *)(param_1 + 2) = iVar6;
  return;
}

