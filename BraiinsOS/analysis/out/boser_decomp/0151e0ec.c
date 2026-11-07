// FUN_0151e0ec @ 0151e0ec size=268 calls_out=3 calls_in=1
// strings: properties | patternProperties | additionalProperties

void FUN_0151e0ec(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (*param_4 == '\x04') {
    uVar6 = *param_3;
    uVar7 = param_3[1];
    iVar2 = FUN_0196b3a8(uVar6,uVar7,"properties",10);
    iVar3 = FUN_0196b3a8(uVar6,uVar7,"patternProperties",0x11);
    pcVar4 = (char *)FUN_0196b3a8(uVar6,uVar7,"additionalProperties",0x14);
    if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\x01')) {
      iVar5 = *(int *)(param_4 + 0xc);
      bVar1 = 0;
    }
    else {
      iVar5 = *(int *)(param_4 + 0xc);
      bVar1 = pcVar4[1] ^ 1;
      if (iVar5 == 1 && (pcVar4[1] & 1U) == 0) {
        if ((iVar3 != 0) || (iVar2 == 0)) goto LAB_0151e1cc;
        goto LAB_0151e1c0;
      }
    }
    if ((iVar5 == 2) && ((iVar2 != 0 && (iVar3 == 0 && (bVar1 & 1) == 0)))) {
LAB_0151e1c0:
      *param_1 = 0;
      return;
    }
  }
LAB_0151e1cc:
  uVar8 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),&DAT_0056fdb8
                       ,8);
  FUN_015279dc(param_1,param_4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  return;
}

