// FUN_0002c3b0 @ 0002c3b0  size=444  callers=2
// program: cgminer


void FUN_0002c3b0(char *param_1,uint param_2,int param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char acStack_8a0 [16];
  char acStack_890 [16];
  char acStack_880 [64];
  char acStack_840 [2052];
  
  uVar3 = FUN_0002a800(param_3);
  dVar5 = (double)FUN_0004accc(*(undefined4 *)(param_3 + 0xc0),*(undefined4 *)(param_3 + 0xc4));
  dVar4 = *(double *)(param_3 + 0x30) * 1000000.0;
  uVar6 = FUN_0004ad88(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
  dVar4 = (*(double *)(param_3 + 0x50) / (double)CONCAT44(extraout_s1,uVar3)) * 1000000.0;
  uVar7 = FUN_0004ad88(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
  FUN_00028838((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),acStack_8a0,0x10,4);
  FUN_00028838((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),acStack_890,0x10,4);
  snprintf(param_1,param_2,"%s%d ",*(char **)(*(int *)(param_3 + 4) + 8),*(int *)(param_3 + 8));
  (**(code **)(*(int *)(param_3 + 4) + 0x14))(param_1,param_2,param_3);
  sVar1 = strlen(param_1);
  snprintf(acStack_880,0x40,"(%ds):%s (avg):%sh/s | A:%.0f R:%.0f HW:%d WU:%.1f/m",DAT_000681e0,
           acStack_890,acStack_8a0,*(double *)(param_3 + 200),*(double *)(param_3 + 0xd0),
           *(int *)(param_3 + 0x2c),(dVar5 / (double)CONCAT44(extraout_s1,uVar3)) * 60.0);
  sVar2 = strlen(acStack_880);
  if (param_2 <= sVar1 + sVar2) {
    snprintf(acStack_840,0x800,"tailsprintf buffer overflow in %s %s line %d","cgminer.c",
             "get_statline",0xc71);
    FUN_0001dd98(3,acStack_840,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1);
  }
  strcat(param_1,acStack_880);
  (**(code **)(*(int *)(param_3 + 4) + 0x18))(param_1,param_2,param_3);
  return;
}

