// FUN_00060fc4 @ 00060fc4  size=676  callers=0
// program: bmminer


undefined4 FUN_00060fc4(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  uint uVar4;
  void *__buf;
  char *__filename;
  undefined4 uVar5;
  stat64 local_90;
  
  iVar1 = FUN_0005f330(*(undefined4 *)(param_1 + 0x1878));
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/rule.c",0x54,"zlog_format_gen_msg fail");
    return 0xffffffff;
  }
  __filename = (char *)(param_1 + 0x1030);
  iVar1 = __xstat64(3,__filename,&local_90);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1438);
    if ((local_90.st_ino._4_4_ == *(int *)(param_1 + 0x144c) &&
         (int)local_90.st_ino == *(int *)(param_1 + 0x1448)) &&
       (local_90.st_dev._4_4_ == *(int *)(param_1 + 0x1444) &&
        (int)local_90.st_dev == *(int *)(param_1 + 0x1440))) goto LAB_00061064;
    close(iVar1);
    iVar1 = open64(__filename,*(uint *)(param_1 + 0x102c) | 0x441,*(undefined4 *)(param_1 + 0x1028))
    ;
    *(int *)(param_1 + 0x1438) = iVar1;
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      goto LAB_00061208;
    }
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 2) {
      FUN_000658a8(2,"src/rule.c",0x5b,"stat fail on [%s], errno[%d]",__filename,*piVar3);
      return 0xffffffff;
    }
    close(*(int *)(param_1 + 0x1438));
    iVar1 = open64(__filename,*(uint *)(param_1 + 0x102c) | 0x441,*(undefined4 *)(param_1 + 0x1028))
    ;
    *(int *)(param_1 + 0x1438) = iVar1;
    if (iVar1 < 0) {
LAB_00061208:
      FUN_000658a8(2,"src/rule.c",0x6b,"open file[%s] fail, errno[%d]",__filename,*piVar3);
      return 0xffffffff;
    }
    iVar1 = __xstat64(3,__filename,&local_90);
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/rule.c",0x72,"stat fail on new file[%s], errno[%d]",__filename,*piVar3);
      return 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x1438);
  }
  *(int *)(param_1 + 0x1440) = (int)local_90.st_dev;
  *(int *)(param_1 + 0x1444) = local_90.st_dev._4_4_;
  *(int *)(param_1 + 0x1448) = (int)local_90.st_ino;
  *(int *)(param_1 + 0x144c) = local_90.st_ino._4_4_;
LAB_00061064:
  __buf = (void *)**(undefined4 **)(param_2 + 0x1c);
  sVar2 = write(iVar1,__buf,(*(undefined4 **)(param_2 + 0x1c))[1] - (int)__buf);
  if (sVar2 < 0) {
    piVar3 = __errno_location();
    FUN_000658a8(2,"src/rule.c",0x7d,"write fail, errno[%d]",*piVar3);
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x1868) != 0) {
      uVar4 = *(int *)(param_1 + 0x186c) + 1;
      if (uVar4 < *(uint *)(param_1 + 0x1868)) {
        *(uint *)(param_1 + 0x186c) = uVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0x186c) = 0;
        iVar1 = fsync(*(int *)(param_1 + 0x1438));
        if (iVar1 != 0) {
          piVar3 = __errno_location();
          FUN_000658a8(2,"src/rule.c",0x85,"fsync[%d] fail, errno[%d]",
                       *(undefined4 *)(param_1 + 0x1438),*piVar3);
        }
      }
    }
  }
  return uVar5;
}

