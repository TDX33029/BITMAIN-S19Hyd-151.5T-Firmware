// FUN_01ac6694 @ 01ac6694 size=160 calls_out=0 calls_in=2
// strings: 

void FUN_01ac6694(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 auStack_18 [2];
  
  pcVar11 = (char *)(param_1 + 0x74);
  if ((*pcVar11 != '\x02') &&
     ((*(char *)(param_1 + 0x78) == '\0' || (*(char *)(param_1 + 0x79) != '\x02')))) {
                    /* WARNING: Could not recover jumptable at 0x01ac6730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[3] + 0x10))(param_2 + 6,param_2[4],param_2[5]);
    return;
  }
  uVar1 = *(undefined4 *)pcVar11;
  uVar6 = *(undefined4 *)(param_1 + 0x78);
  uVar9 = *(undefined4 *)(param_1 + 0x7c);
  iVar2 = *(int *)(param_1 + 0x80);
  uVar7 = *(undefined4 *)(param_1 + 0x84);
  uVar10 = *(undefined4 *)(param_1 + 0x88);
  auStack_18[0] = *(undefined4 *)(param_1 + 0x8c);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  *(undefined4 *)pcVar11 = *param_2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar8 = param_2[6];
  *(undefined4 *)(param_1 + 0x80) = param_2[3];
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  if ((char)uVar1 != '\x02') {
    pcVar5 = *(code **)(iVar2 + 0x10);
    (*pcVar5)(auStack_18,uVar7,uVar10,pcVar5,uVar1,uVar6,uVar9);
  }
  return;
}

