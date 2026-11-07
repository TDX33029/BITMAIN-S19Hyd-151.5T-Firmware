// FUN_01beb7ba @ 01beb7ba size=176 calls_out=0 calls_in=1
// strings: 

void FUN_01beb7ba(uint *param_1,undefined4 param_2,int *param_3)

{
  short *psVar1;
  ushort *puVar2;
  char *pcVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  
  switch(param_2) {
  case 9:
    puVar5 = (uint *)*param_3;
    *param_3 = (int)(puVar5 + 1);
    *param_1 = *puVar5;
    break;
  case 10:
  case 0xd:
  case 0x17:
    puVar5 = (uint *)*param_3;
    *param_3 = (int)(puVar5 + 1);
    uVar6 = *puVar5;
    *param_1 = uVar6;
    param_1[1] = (int)uVar6 >> 0x1f;
    break;
  case 0xb:
  case 0xe:
  case 0x14:
  case 0x18:
    puVar5 = (uint *)*param_3;
    *param_3 = (int)(puVar5 + 1);
    *param_1 = *puVar5;
    param_1[1] = 0;
    break;
  case 0xc:
  case 0x13:
  case 0x15:
  case 0x16:
    puVar5 = (uint *)(*param_3 + 7U & 0xfffffff8);
    *param_3 = (int)(puVar5 + 2);
    uVar6 = puVar5[1];
    *param_1 = *puVar5;
    param_1[1] = uVar6;
    break;
  case 0xf:
    psVar1 = (short *)*param_3;
    *param_3 = (int)(psVar1 + 2);
    uVar6 = (uint)*psVar1;
    *param_1 = uVar6;
    param_1[1] = (int)uVar6 >> 0x1f;
    break;
  case 0x10:
    puVar2 = (ushort *)*param_3;
    *param_3 = (int)(puVar2 + 2);
    *param_1 = (uint)*puVar2;
    param_1[1] = 0;
    break;
  case 0x11:
    pcVar3 = (char *)*param_3;
    *param_3 = (int)(pcVar3 + 4);
    uVar6 = (uint)*pcVar3;
    *param_1 = uVar6;
    param_1[1] = (int)uVar6 >> 0x1f;
    break;
  case 0x12:
    pbVar4 = (byte *)*param_3;
    *param_3 = (int)(pbVar4 + 4);
    *param_1 = (uint)*pbVar4;
    param_1[1] = 0;
    break;
  case 0x19:
  case 0x1a:
    puVar5 = (uint *)(*param_3 + 7U & 0xfffffff8);
    *param_3 = (int)(puVar5 + 2);
    uVar6 = puVar5[1];
    *param_1 = *puVar5;
    param_1[1] = uVar6;
  }
  return;
}

