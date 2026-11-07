// FUN_012c33d8 @ 012c33d8 size=232 calls_out=5 calls_in=1
// strings: 

void FUN_012c33d8(undefined1 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = *param_2;
  iVar3 = param_2[2];
  uVar9 = FUN_012c2334(param_3);
  uVar10 = FUN_012c3898(param_4);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_01bed93e((int)uVar10,0,uVar4);
  cVar1 = FUN_01341760(param_2,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,uVar4,param_5)
  ;
  if (cVar1 == '\x03') {
    FUN_013414c8(param_1);
    return;
  }
  iVar5 = *param_2;
  iVar6 = *(int *)(param_3 + 8);
  param_1[1] = cVar1;
  *param_1 = 4;
  *(int *)(param_3 + 8) = iVar6 + (iVar5 - iVar2);
  uVar7 = *(int *)(param_4 + 8) + (param_2[2] - iVar3);
  uVar8 = *(uint *)(param_4 + 0xc);
  if (*(uint *)(param_4 + 0xc) < uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)(param_4 + 8) = uVar7;
  *(uint *)(param_4 + 0xc) = uVar8;
  return;
}

