// FUN_000105b0 @ 000105b0  size=280  callers=1
// program: id2mac


void FUN_000105b0(byte *param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  uint param7;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint param3;
  undefined4 uVar7;
  byte *pbVar8;
  uint param5;
  byte *pbVar9;
  uint param4;
  
  pcVar1 = getenv("CPUID");
  if (pcVar1 == (char *)0x0) {
    sVar2 = strlen((char *)param_1);
  }
  else {
    uVar4 = *(undefined4 *)(pcVar1 + 4);
    uVar6 = *(undefined4 *)(pcVar1 + 8);
    uVar7 = *(undefined4 *)(pcVar1 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)pcVar1;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    sVar2 = strlen((char *)param_1);
  }
  if (sVar2 == 0) {
    param7 = 0xff;
    uVar3 = 0xff;
    param5 = 0xff;
    param4 = 0xff;
    uVar5 = 0;
    param3 = 0;
  }
  else {
    uVar5 = 0;
    pbVar8 = param_1;
    do {
      pbVar9 = pbVar8 + 1;
      uVar5 = *(uint *)(&DAT_00021040 + ((uint)*pbVar8 ^ uVar5 >> 8) * 4) & 0xffff ^
              (uVar5 & 0xff) << 8;
      pbVar8 = pbVar9;
    } while (pbVar9 != param_1 + sVar2);
    uVar3 = 0xffffffff;
    pbVar8 = param_1;
    do {
      pbVar9 = pbVar8 + 1;
      uVar3 = *(uint *)(&DAT_000108fc + ((uint)*pbVar8 ^ uVar3 >> 0x18) * 4) ^ uVar3 << 8;
      pbVar8 = pbVar9;
    } while (pbVar9 != param_1 + sVar2);
    param4 = uVar3 & 0xff;
    param7 = uVar3 >> 0x18;
    param3 = uVar5 >> 8;
    param5 = (uVar3 & 0xffff) >> 8;
    uVar5 = uVar5 & 0xfe;
    uVar3 = (uVar3 & 0xffffff) >> 0x10;
  }
  sprintf(param_2,"%02x:%02x:%02x:%02x:%02x:%02x",uVar5,param3,param4,param5,uVar3,param7);
  return;
}

