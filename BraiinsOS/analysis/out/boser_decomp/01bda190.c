// FUN_01bda190 @ 01bda190 size=32 calls_out=2 calls_in=5
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01bda19c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_01bda190(undefined8 *param_1)

{
  undefined8 *extraout_r1;
  undefined8 uVar1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  
  uVar1 = *param_1;
  FUN_01bda040((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)param_1[1]);
  FUN_01bda060();
  *extraout_r1 = uVar1;
  extraout_r1[1] = CONCAT44(extraout_s3,extraout_s2);
  return;
}

